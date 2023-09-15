#include "shell.h"

/**
 * exeCmd - execute the user command
 * @buffer: array of argument
 * @argv: array of arguments from the CMD
 * Return: return nothing
 */

void exeCmd(char *buffer, char **argv)
{
	int exe, status;
	pid_t pid;

	/*Checking if buffer is not empty*/
	if (buffer != NULL)
	{
		/*Creating a child process*/
		pid = fork();
		if (pid == 0)/*Checking if fork is successful*/
		{
			exe = execve(buffer, argv, NULL);/*Executing the command*/
			if (exe == -1)
				perror(argv[0]);/*command failure*/
		}
		else if (pid == -1)/*Creating child process failed*/
			perror("child process failed");
		else
			wait(&status);/*avoiding zombie and orphan process*/
	}
	else
		prerro("No user input");
}
