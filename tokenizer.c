#include "shell.h"

/**
 * tokneize - function to tokenize the buffer and store in  s 2d array
 * @buffer: buffer containing the user input
 * @argv: pointer to the execution file name
 * Return: return the number of words
 */

void tokenize(char buffer[], char *argv)
{
	if (buffer == NULL)
	{
		perror("Error: no input");
		exit(97);
	}

	allocateM(buffer, argv);

}


/**
 * allocateM - function ti allocate memory to the buffer that will contain the path
 * to exection
 *
 * @buffer: the buffer that contains the command from the user
 * @argv: the vector array
 *
 * Return: return te number of commands
 */

int allocateM(char buffer[], char *argv)
{
	int count = 0, i = 0, n = 0;
	char *token, *delim = " ", **exe;

	while (buffer[n] != '\0')
	{
		if (buffer[n] == ' ')
			count++;
		n++;
	}
	count += 1;

	printf("%d \n", count);


	exe = malloc(sizeof(char) * count);
	if (exe == NULL)
		perror("memory allocation failed");

	token = strtok(buffer, delim);

	while (token)
	{
		exe[i] = token;
		token = strtok(NULL, delim);
		i++;
	}

	exe[count] = NULL;
	exeCmd(exe, argv);
	free(exe);

	return (count);
}
