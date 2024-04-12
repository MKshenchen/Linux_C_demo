#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("a demo of execl's use\n");

    int err = execl("/bin/ls", "ls", "-la", NULL);
    if (err < 0)
        printf("execl failed\n");

    printf("done\n");

    return 0;
}