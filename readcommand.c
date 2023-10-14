#include "shell.h"

/**
 * readCommand - Function to take users input
 *
 * @argv: argument vector
 * @env: environment variable
 * Return: return number of characters read from the standard input
 */

int readCommand(char **argv, char **env)
{
	size_t n = 0;
	char *buff = NULL, *argsC[MAX_ARG];
	int size;

	size = getline(&buff, &n, stdin);
	if (size == -1)
	{
		if (feof(stdin))
		{
			free(buff);
			exit(0);
		}
		else
			perror("Failed to read user input");
		free(buff);
	}

	buff = removeNC(buff, size);
	tokenize(buff, argsC);
	exeCmd(argsC, argv, env);

	free(buff);
	return (size);
}
