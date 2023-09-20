#include "shell.h"

/**
 * printEnviron - function to print the current encironment
 *
 * Return: void
 */

void printEnviron(void)
{
	extern char **environ;
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		prints(*env);
		putchar('\n');
	}
}
