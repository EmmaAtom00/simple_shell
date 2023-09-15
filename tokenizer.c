#include "shell.h"

/**
 * tokenize - function to tokenize the buffer and store in  s 2d array
 * @buffer: buffer containing the user input
 * @argv: pointer to the execution file name
 * Return: return the number of words
 */

void tokenize(char buffer[], char *argv)
{
	char *token, **exe = NULL, *delim = " ";
	int count = 0 , i = 0;

	if (buffer == NULL)
	{
		perror("Error");
	}
	token = strtok(buffer, delim);

	exe = malloc(1024);
	if (!exe)
		perror("memory allocation failed");

	while (token)
	{
		exe[i] = token;
		token = strtok(NULL, delim);
		count++;
		i++;
	}
	if (count == 0)
		perror("No tokens found");


	exeCmd(exe, argv);
	free(exe);
}
