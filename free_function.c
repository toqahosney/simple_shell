#include "shell.h"

/**
 * free_array - this function frees the tokenized args
 * @arguments: the dynamically allocated array of strings
 * Return: void
 */

void free_array(char **arguments)
{
	int i;

	if (arguments != NULL)
	{
		for (i = 0; arguments[i] != NULL; i++)
		{
			free(arguments[i]);
		}
		free(arguments);
	}
}
