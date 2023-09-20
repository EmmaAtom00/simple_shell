#include "shell.h"

/**
 * exeCmd - function to execute the commands
 * @command: the command to be executed
 * @argv: array to support execution
 * Return: rerturn nothing
 */

void exeCmd(char *command, char **argv, char **en)
{
	pid_t pid;
	int status, exe;

	pid = fork();
	if (pid == -1)
	{
		perror("cannot create a process");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		exe = execve(command, argv, en);
		if (exe == -1)
		{
			perror(command);
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(&status);
}
