#include "shell.h"

/**
 * execute_command - Executes the given command with its arguments
 * @args: Array of strings containing the command and its arguments
 */
void execute_command(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror(args[0]);
			exit(2);
		}
	}
	else if (pid < 0)
	{
		perror("fork");
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}
