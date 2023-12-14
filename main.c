#include "shell.h"

/**
 * main - entry point of the shell
 *
 * Return: 0 on success.
 */

int main(void)
{
	char *line = NULL;
	char **tokens;
	int exit_status = 0;
	size_t len = 0;
	ssize_t read_line;

	while (1)
	{

		if (isatty(fileno(stdin)))
			_puts("$ ");
		read_line = getline(&line, &len, stdin);

		if (read_line == -1)
			break;
		else if (line[0] == '\n' || is_whitespace(line))
			continue;
		else
		{
			tokens = tokenizing(line);
			if (tokens[0] != NULL && strcmp(tokens[0], "exit") == 0)
			{
				if (tokens[1] != NULL)
					exit_status = atoi(tokens[1]);
				free(line);
				free_array(tokens);
				exit(exit_status);
				return (0);
			}
			execute_command(tokens);
		}

		free(line);
		free_array(tokens);
		line = NULL;
		len = 0;
	}

	free(line);
	return (0);
}
