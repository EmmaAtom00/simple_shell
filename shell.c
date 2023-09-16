#include "shell.h"

/**
 * main - entry point
 * @argc: Arguments counts
 * @argv: Arguments vector
 * Return: return 0 for success
 */

int main(int argc, char *argv[])
{
	while (1)
	{
		printPrompt();
		readCommands();
	}

	return (0);
}
