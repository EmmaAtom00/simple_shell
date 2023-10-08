#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_ARG 125

int readCommand(void);
int tokenize(char *command, char *argsC[]);
int exeCmd(char *argsC[]);
char *removeNC(char *str, int len);

#endif
