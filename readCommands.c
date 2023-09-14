#include "shell.h"

/**
 * getCommand - read the user input on the shell
 *
 * Return: return the number of characters read
 */

int getCommand(void)
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

	return (size);
}
