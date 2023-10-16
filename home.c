#include "shell.h"

/**
 * home - all functions home
 * Return: return 0 on success and -1 otherwise
 *
 */

int home(char **argv, char **env)
{
	prompt();
	readCommand(argv, env);
	return (0);
}
