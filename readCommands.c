#include "shell.h"

/**
 * getCommand - read the user input on the shell
 * @argv: array of argument containing the program bin file
 * Return: return the number of characters read
 */

int getCommand(char **argv)
{
	size_t n = 0;
	int buff_len;
	char *buffer = NULL;

	/*Reads the comand from the user*/
	buff_len = getline(&buffer, &n, stdin);

	if (buff_len == -1)
	{
		/* Handle "end of of file" condition (Ctrl+D)*/
		if (feof(stdin))
			prints("\nExiting shell.\n");
		else
			/*Handle failure in reading inpu*/
			perror("can't read input");
		free(buffer);/*Free allocated memory by getline*/
		exit(0);
	}

	/* Remove the newline character from the input*/
	if (buff_len > 0 && buffer[buff_len - 1] == '\n')
		buffer[buff_len - 1] = '\0';

	if (*buffer == '\n')
		;
	else
	{
		/*Pass the read command to the executing function*/
		exeCmd(buffer, argv);
	}

	free(buffer);/*free buffer to avoid memory leakage*/
	return (buff_len);
}
