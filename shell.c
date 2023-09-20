#include "shell.h"

/**
 * main - entry point
 * @argc: Arguments counts(unused)
 * @argv: Arguments vector(unused)
 * @env: environment variables
 * Return: return 0 for success
 */

int main(int argc, char **argv, char **env)
{
	(void) argc;

	while (1)
	{
		printPrompt();
		readCommands(env, argv);
	}

	return (0);
}
