#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <unistd.h>
#include <strings.h>
#include <stdlib.h>

void printPrompt(void);
void prints(char *string);
int getCommand(void);


#endif
