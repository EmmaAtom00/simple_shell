#include "shell.h"

/**
 * main = entry point
 * @argc: variable count
 * @argv: argument vector
 * Return: return 0 for success
 */

int main()
{
	while (1)
	{
		printPrompt();
		readCommands();
	}

	return (0);
}
