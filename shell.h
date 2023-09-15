#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT 256

void printPrompt(void);
void prints(char *string);
int getCommand(char **argv);
void exeCmd(char *buffer, char **argv);
void tokenize(char buffer[], char **argv);
int allocateM(char buffer[], char **argv);


#endif
