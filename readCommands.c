#include "shell.h"

/**
 * readCommands - function to read commands from user inputs
 * @environ: envronment variable
 * @argv: argument vector
 * Return: return the number of input characters
 */

int readCommands(char **environ, char **argv)
{
	int readC, argCount;
	size_t n = 0;
	char *command = NULL, *args[MAX_ARG];

	readC = getline(&command, &n, stdin);
	if (readC == -1)
	{
		if (feof(stdin))
		{
			exit(0);
		}
		else
			perror("Error reading command");
		free(command);
	}
	if (readC > 0 && command[readC - 1] == '\n')
		command[readC - 1] = '\0';
	argCount = tokenize(command, args);
	if (argCount > 0)
	{
		if (_strcmp(args[0], "exit") == 0)
		{
			free(command);
			exit(0);
		}
		else if (_strcmp(args[0], "env") == 0)
			printEnviron(environ);
		else
			exeCmd(args[0], args, environ, argv);
	}
	free(command);
	return (readC);
}
