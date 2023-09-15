#include "shell.h"

/**
 * main - Main file to continue the prompt
 *
 * Return: return 0 for success
 */

int main(int argc, char **argv)
{
	int n = 1;

	(void) argc;
	
	while (n == 1)
	{
		printPrompt();
		getCommand(argv[0]);
	}

	return (0);
}
