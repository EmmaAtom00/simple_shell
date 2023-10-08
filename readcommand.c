#include "shell.h"

/**
 * readCommand - Function to take users input
 *
 * Return: return number of characters read from the standard input
 */

int readCommand(void)
{
	size_t n = 0;
	char *buff = NULL, *command, *argsC[MAX_ARG];
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
		{
			perror("Failed to read user inpt");
			free(buff);
		}
	}

	command = removeNC(buff, size);
	argcount = tokenize(command, argsC);

	exeCmd(argsC);

	free(buff);
	return (size);
}
