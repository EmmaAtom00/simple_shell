#ifndef SHELL
#define SHELL

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void printPrompt(void);
void prints(char *string);
int getCommand(char *argv);
void exeCmd(char *buffer[], char *argv);
void tokenize(char buffer[], char *argv);


#endif
