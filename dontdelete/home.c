#include "shell.h"

/**
 * home - all functions home
 * @argv: the argument vector
 * @env: the environ
 * Return: return 0 on success and -1 otherwise
 */

int home(char **argv, char **env)
{
	char *buff, *argsC[MAX_ARG];
	int size;

	prompt();
	buff = readCommand();
	size = _strlen(buff);
	buff = removeNC(buff, size);
	tokenize(buff, argsC);
	built_in(argsC[0], buff);

	if (_strcmp(buff, "\n") == 0)
		;
	else
	{
		exeCmd(argsC, argv, env);
	}

	free(buff);
	return (0);
}
