#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
    pid_t pid, child_pid;
    int status;

    pid = fork();
    if (pid < 0)
        printf("fork failed\n");
    else if (pid == 0)
    {
        printf("child_pid is %d\n", getpid());
        sleep(3);
        printf("child will to quit\n");
    }
    else
    {
        child_pid = wait(&status);

        if (child_pid == pid)
            printf("get exitPro is %d\nget pro's status is %d\n", child_pid, status);
        else
            printf("have some errors\n");
    }

    exit(EXIT_SUCCESS);
}