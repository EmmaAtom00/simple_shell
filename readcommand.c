#include "shell.h"

/**
 * readCommand - Function to take users input
 *
 * Return: return number of characters read from the standard input
 */

int readCommand(char **argv)
{
	size_t n = 0;
	char *buff = NULL, *command, *argsC[MAX_ARG];
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
		{
			perror("Failed to read user inpt");
			free(buff);
		}
	}

	command = removeNC(buff, size);
	tokenize(command, argsC);

	exeCmd(argsC, argv);

	free(buff);
	return (size);
}
