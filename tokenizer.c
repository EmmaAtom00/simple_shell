#include "shell.h"

/**
 * tokenize - funtion to tokenize the commands from the user
 * @buffer: the command from the user
 * @args: the buffer where our tokens will be stored
 * Return: return the numbers of tokens we have in the buffer
 */

int tokenize(char *buffer, char *args[])
{
	char *token, *delim = " ";
	int count = 0;

	token = strtok(buffer, delim);

	while (token != NULL && count < MAX_ARG)
	{
		args[count++] = token;
		token = strtok(NULL, delim);
	}

	args[count] = NULL;
	return (count);
}
