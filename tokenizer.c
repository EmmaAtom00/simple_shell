#include "shell.h"


<< << << < HEAD
 /**
 * tokenize - function to tokenize the buffer and store in  s 2d array
 * @buffer: buffer containing the user input
 * @argv: pointer to the execution file name
 * Return: return the number of words
 */

void tokenize(char buffer[], char *argv)
{
	char *token, **exe = NULL, *delim = " ";
	int count = 0, i = 0;

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
== == ==
 /**
 * tokenize - funtion to tokenize the commands from the user
 * @command: the command from the user
 * @args: the buffer where our tokens will be stored
 * Return: return the numbers of tokens we have in the buffer
 */

int tokenize(char *buffer, char *args[])
{
	char *token, *delim = " ";
	int count = 0;

	token = strtok(buffer, delim);
	while (token != NULL && count < MAX_ARG)
	{
		args[count++] = token;
		token = strtok(NULL, delim);
	}
	args[count] = NULL;
	return (count);
>> >> >> > 8659a883fc2d84be359a2b470e48f480b1ffeee1
}
