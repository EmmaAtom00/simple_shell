#include "shell.h"

/**
 * exeCmd - execute the user command
 * @buffer: array of argument
 * Return: return nothing
 */

void exeCmd(char *buffer[], char *argv, int count)
{
	pid_t pid;
	int exe, i = 0;
	
	buffer[count] = NULL;

	pid = fork();
	if (pid == 0)
	{
		exe = execve(buffer[i], buffer, NULL);
		if (exe == -1)
			perror(argv);
	}
	else
		wait(NULL);
}
