#ifndef _ZHSH_BUILTIN_H_
#define _ZHSH_BUILTIN_H_

#define _POSIX_SOURCE
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <getopt.h>
#include "error.h"
#include "env.h"
#include "io.h"

typedef struct _builtin {
    char*   cmd_name;
    int   (*cmd_func)(size_t, char** );
} builtin_t;



int cd_builtin   (size_t argc, char** argv);
int pwd_builtin  (size_t argc, char** argv);

int echo_builtin (size_t argc, char** argv);
int read_builtin (size_t argc, char** argv);

int exec_builtin (size_t argc, char** argv);
int shift_builtin(size_t argc, char** argv);

int kill_builtin (size_t argc, char** argv);
int exit_builtin (size_t argc, char** argv);


int true_builtin (size_t argc, char** argv);
int false_builtin(size_t argc, char** argv);

/*
builtin_t builtins[10] = { 
    { "cd",       cd_builtin }, { "pwd",     pwd_builtin },
    { "echo",   echo_builtin }, { "read",   read_builtin },
    { "exec",   exec_builtin }, { "kill",   kill_builtin },
    { "shift", shift_builtin }, { "exit",   exit_builtin },
    { "true",   true_builtin }, { "false", false_builtin }
};
*/
#endif
