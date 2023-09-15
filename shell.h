#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT 256
#define MAX_ARG 10

void printPrompt(void);
void prints(char *string);
int getCommand(char **argv);
void exeCmd(char *buffer, char **argv);
void printEnvironment();
int tokenize(char *input, char *args[]);
void completeGetCommand(int argCount, char *args[], char *buffer, char **argv);

#endif
