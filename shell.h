#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_ARG 10
#define MAX_INPUT 256

int readCommands(void);
int _strcmp(const char *str1, const char *str2);
int tokenize(char *buffer, char *args[]);
void printPrompt(void);
void exeCmd(char *command, char **argv);
void printEnviron(void);
int prints(char *string);

#endif
