#include "shell.h"

/**
 * tokenizing - tokenizes a string and returns an array of arguments.
 * @str: pointer to the string.
 * Return: an array of words.
 */
char **tokenizing(char *str)
{
	char *token;
	char **arguments = NULL;
	int arg_count = 0;
	int i;

	if (str == NULL)
	{
		perror("Error, No Command");
		return (NULL);
	}

	arguments = malloc(sizeof(char *) * (MAX_ARGS + 1));
	if (arguments == NULL)
	{
		perror("Error, No memory");
		exit(EXIT_FAILURE);
	}

	token = strtok(str, " \n");
	while (token != NULL && arg_count < MAX_ARGS)
	{
		arguments[arg_count] = strdup(token);
		if (arguments[arg_count] == NULL)
		{
			perror("Error, No memory");
			for (i = 0; i < arg_count; i++)
				free(arguments[i]);
			free(arguments);
			exit(EXIT_FAILURE);
		}
		arg_count++;
		token = strtok(NULL, "\n");
	}
	arguments[arg_count] = NULL;

	return (arguments);
}
