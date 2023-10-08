#include "shell.h"

/**
 * readCommand - Function to take users input
 *
 * @argv: argument vector
 * Return: return number of characters read from the standard input
 */

int readCommand(char **argv)
{
	size_t n = 0;
	char *buff = NULL, *argsC[MAX_ARG];
	int size, argcount;

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
	argcount = tokenize(buff, argsC);

	if (argcount > 0)
	{
		if (_strcmp(buff, "exit") == 0)
		{
			free(buff);
			exit();
		}
		else
			exeCmd(argsC, argv);
	}


	free(buff);
	return (size);
}
