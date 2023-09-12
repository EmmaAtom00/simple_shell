#include "shell.h"

/**
 * prints - function to print strings
 * @string: the string to be printed to standard output
 * Return: return nothing
 */

void prints(char *string)
{
	int i = 1;

	while (string[i] != '\0')
		i++;

	write(STDOUT_FILENO, string, i);
}
