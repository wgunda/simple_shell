#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <signal.h>

#include <sys/wait.h>
#define BUFFER_SIZE 1024
#define MAX_SIZE 64
#define MAX_ALIASES 64
#define MAX_ALIAS_LENGTH 128


extern char **environ;


#endif
