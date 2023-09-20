#include "shell.h"

/**
 * main - entry point
 * @argc: Arguments counts(unused)
 * @argv: Arguments vector(unused)
 * Return: return 0 for success
 */

int main(void)
{
	while (1)
	{
		printPrompt();
		readCommands();
	}

	return (0);
}
