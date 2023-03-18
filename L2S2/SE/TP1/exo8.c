#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void withFor(char c)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (fork() == 0)
        {
            printf("%c", c);
            exit(0);
        }
        c++;
    }
}

void withoutFor(char c)
{
    
}

int main()
{
    char c = 'A';
    withFor(c);
    printf("\n");
    withoutFor(c);
}