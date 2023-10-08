#include "shell.h"

/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: return 0 on sucess
 */

int main(int argc, char **argv)
{
	(void) argc;
	/* Loop to make our programming continue displaying a prompt */
	while (1)
	{
		readCommand(argv);
		/*function to receive user input from stdin before tokenization*/
	}

	return (0);
}
