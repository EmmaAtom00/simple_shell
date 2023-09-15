#include "shell.h"

/*
 * printEnvironment - function to print the current environment variables
 * Return: returns nothing
 */

void printEnvironment()
{
	extern char **environ;
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		prints(env[0]);
		putchar('\n');
	}
}
