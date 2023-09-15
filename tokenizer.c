#include "shell.h"

/**
 * tokenize - function that takes a user input string and an array to store
 * command and arguments
 * @input: input from the user
 * @args: storage for the tokenized tokens
 * Return: return number of arguments
 */

int tokenize(char *input, char *args[])
{
	int argCount = 0;
	char *delim = " ";
	char *token = strtok(input, delim);

	while (token != NULL && argCount < MAX_ARG)
	{
		args[argCount++] = token;
		token = strtok(NULL, delim);
	}

	args[argCount] = NULL;
	return (argCount);
}
