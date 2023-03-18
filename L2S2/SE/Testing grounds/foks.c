#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h> 

void main()
{
    int id, i = 0;
    if ((id = fork() == 0))
    {
        i = i - 1;
        printf("j = % d\n", i);
        exit(0);
    }
wait(0);
i = i + 1;
printf("j = % d\n", i);
}
