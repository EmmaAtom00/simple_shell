#include "shell.h"

/**
 * exeCmd - function to execute userr command
 * @argsC: an array of commands from the user
 * Return: return 0 om success
 */

int exeCmd(char *argsC[])
{
	pid_t pid;
	int exe, status;

	pid = fork();

	if (pid == -1)
	{
		perror("Failed to create process");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		exe = execve(argsC[0], argsC, NULL);
		if (exe == -1)
		{
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);

	return (0);
}
