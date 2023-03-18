#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>

void main()
{
    int j = 3, id, i;
    for (i = 0; i < 2; i++)
    {
        if ((id = fork() == 0))
        {
            j = j - 1;
            printf("j = % d\n", j);
            if ((id = fork() == 0))
            {
                j = j - 1;
                printf("j = % d\n", j);
            }
            exit(0);
        }
    }
    wait(0);
    j = j + 1;
    printf("j = % d\n", j);
}
