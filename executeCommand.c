#include "shell.h"

/**
 * exeCmd - execute the user command
 * @buffer: array of argument
 * Return: return nothing
 */

void exeCmd(char *buffer[], char *argv)
{
	pid_t pid;
	int exe, i = 0, n = 0;


	while (buffer[i] != NULL)
	{
		pid = fork();
		if (pid == 0)
		{
			/*while (buffer[n] != NULL)
			{
				printf("%s\n", buffer[n]);
				n++;
			}*/
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
