#include "shell.h"
/**
 * is_whitespace - checks if the line consists of white spaces.
 * @str: The character to be printed on screen.
 * Return:  bool.
 */
bool is_whitespace(const char *str)
{
	while (*str != '\0')
	{
		if (!isspace((unsigned char)*str))
			return (false);
		str++;
	}
	return (true);
}
