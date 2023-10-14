#include "shell.h"

/**
 * extPath - extract the path from the environment
 * @environ: the environment variable
 * Return: return the path
 */

char *extPath(char *arg)
{
	char *path = getenv("PATH"), *path_cp;
	char path_to_exe[1024], *dir, *command;

	if (path)
	{
		if (access(arg, X_OK) == 0)
			return (arg);
		path_cp = path;
		dir = strtok(path_cp, ":");

		while (dir)
		{
			snprintf(path_to_exe, sizeof(path_to_exe), "%s/%s", dir, arg);

			if (access(path_to_exe, X_OK) == 0)
			{
				command = path_to_exe;
				break;
			}
			dir = strtok(NULL, ":");
		}
	}
	if (command)
		return (command);
	else
		exit(EXIT_FAILURE);
}
