/* 
 * mypid.c - Another handy routine for testing your tiny shell
 * 
 * usage: mypid
 * Prints ppid to stdout
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv) 
{
    pid_t pid; 

    pid = getppid(); 

    if (argc > 1 && strcmp(argv[0], "-e")) {
        fprintf(stderr, "(%d)\n", pid);
    }
    fprintf(stdout, "(%d)\n", pid);

    exit(0);

}
