#include "shell.h"

/**
 * extPath - extract the path from the environment
 * @environ: the environment variable
 * Return: return the path
 */

char *extPath(char **environ)
{
	int i = 0;
	char *path, *pathKey, *pathValue;
	char *envi = environ[i], *buff;

	while (envi != NULL)
	{
		buff = envi;

		pathKey = strtok(envi, "=");
		pathValue = strtok(NULL, "=");

		if (_strcmp(pathKey, "PATH") == 0)
		{
			path = buff;
			break;
		}
		i++;
		envi = environ[i];
	}

	prints(path);
	putchar('\n');
	prints(pathValue);
	putchar('\n');
	return (path);
}
