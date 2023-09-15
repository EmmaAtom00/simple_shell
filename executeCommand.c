#include "shell.h"

/**
 * exeCmd - execute the user command
 * @buffer: array of argument
 * Return: return nothing
 */

void exeCmd(char *buffer[], char *argv)
{
	pid_t pid;
	int exe, i = 0;

	while (buffer[i] != NULL)
	{
		printf("execute Command has: %s ", buffer[i]);
		pid = fork();
		if (pid == 0)
		{
			exe = execve(buffer[i], buffer, NULL);
			if (exe == -1)
			{
				perror(argv);
				break;
			}
		}
		else
			wait(NULL);
		i++;
	}
}
