#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void handle_cd(char *args);
char *checkPath(char *command);
void handle_exit(void);
extern char **environ;

#endif
