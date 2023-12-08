#include "shell.h"

/**
 * print_function - this function is a small replacement for printf
 * @str: a pointer to the string that is needed to be printed
 * Return: oid
 */
void print_function(char *str)
{
	int len = strlen(str);

	write(STDOUT_FILENO, str, len);
}
