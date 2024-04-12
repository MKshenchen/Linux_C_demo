#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    printf("a demo of fork's use\n");

    pid_t res = fork();
    if (res == -1)
        printf("fork failed\n");
    else if (res == 0)
        printf("res is %d\nnow is childPro: %d\n", res, getpid());
    else
        printf("res is %d\nnow is farPro: %d\n", res, getpid());

    return 0;
}