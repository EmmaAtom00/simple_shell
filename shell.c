#include "shell.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 for success
 */

int main(int argc, char **argv)
{
	(void) argc;

	while (1)
	{
		printPrompt();
		getCommand(argv);
	}

	return (0);
}
