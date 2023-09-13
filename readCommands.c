#include "shell.h"

/**
 * getCommand - read the user input on the shell
 *
 * Return: return the number of characters read
 */

int getCommand(char *argv)
{
	size_t n = 10;
	int size;
	char *buffer = NULL;

	size = getline(&buffer, &n, stdin);

	if (size == -1)
	{
		perror("Failed to read input");
		return (-1);
	}
	if (*buffer == '\n')
	{
		;
	}
	else
	{
		printf("readCommand has: %s\n", buffer);
		tokenize(buffer, argv);
	}

	return (size);
}
