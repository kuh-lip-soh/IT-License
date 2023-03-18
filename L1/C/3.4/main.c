#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("X*Y|");
    for(i=0; i<11; i++)
        printf("%4d",i);
        printf("\n------------------------------------------------\n");
    for(i=0; i<11; i++)
    {
        printf("%3d|",i);
        for(j=0; j<11; j++)
            printf("%4d",i*j);
        printf("\n");
    }
    return 0;
}
