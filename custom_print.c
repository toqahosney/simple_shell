#include "shell.h"
/**
 * _puts - implementation of puts to print a string without a newline.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - prints a characyer to stdout.
 * @chr: The character to be printed on screen.
 * Return:  int.
 */
int _putchar(char chr)
{
	return (write(1, &chr, 1));
}
