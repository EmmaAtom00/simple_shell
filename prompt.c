#include "shell.h"

/**
 * printPrompt - function to print the CLI prompt
 *
 * Return: returns nothing
 */

void printPrompt(void)
{
	/*The infinite prompt on the terminal, can be modified*/
	write(STDOUT_FILENO, "($) ", 4);
}
