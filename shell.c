#include "shell.h"

/**
 * main - Main file to continue the prompt
 *
 * Return: return 0 for success
 */

int main(void)
{
	int n = 1;

	while (n == 1)
	{
		printPrompt();
		getCommand();
	}

	return (0);
}
