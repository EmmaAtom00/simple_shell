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

	argv[0] = "program name";

	while (1)
	{
		printPrompt();
		readCommands(env);
	}

	return (0);
}
