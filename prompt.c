#include "shell.h"

/**
 * printPrompt - function to print the CLI prompt
 *
 * Return: returns nothing
 */

void printPrompt(void)
{
	write(STDOUT_FILENO, "($) ", 4);
}
