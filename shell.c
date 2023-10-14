#include "shell.h"

/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 * @env: environment variable
 * Return: return 0 on sucess
 */

int main(int argc, char **argv, char **env)
{
	(void) argc;
	/* Loop to make our programming continue displaying a prompt */
	while (1)
	{
		readCommand(argv, env);
		/*function to receive user input from stdin before tokenization*/
	}

	return (0);
}
