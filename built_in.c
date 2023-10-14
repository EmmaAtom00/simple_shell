#include "shell.h"

/**
 * built_in - function to help with built in functions
 * @var: variable conatining the built_in function
 * Return: return 0 on success
 */

int built_in(char *var, char *buff)
{
	if (_strcmp(var, "exit") == 0)
	{
		free(buff);
		exit(0);
	}
	return (0);
}
