#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    printf("a demo of system's use\n");

    pid_t res =system("ls -l");

    // pid_t res =system("ls -l &");

    printf("done\n");

    return res;
}