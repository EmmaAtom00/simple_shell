#include "shell.h"

/**
 * prints - function to print just strings
 * @string: the string to be printed
 * Return: return the numbers of strings printed
 */

int prints(char *string)
{
	int countString = 0;

	while (string[countString] != '\0')
		countString++;

	write(STDOUT_FILENO, string, countString);

	return (countString);
}
