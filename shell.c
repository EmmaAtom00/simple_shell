#include "shell.h"

/**
 * main - entry point
 * @argc: Arguments counts(unused)
 * @argv: Arguments vector(unused)
 * Return: return 0 for success
 */

int main(int argc, char **argv, char **env)
{
	(void) argc;

	prints(argv[0]);
	while (1)
	{
		printPrompt();
		readCommands(env);
	}

	return (0);
}
