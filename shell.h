#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_ARGS 50
#define MAX_CHARS 100

void print_function(char *str);
char **tokenizing(char *str);
void free_array(char **arguments);
void execute_command(char **args);

#endif
