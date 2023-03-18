#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    for(i=1; i; i++)
    {
        printf("N=");
        scanf("%d",&n);
        if(n>59)
            if(n<121)
                if(!(n%2))
                {
                    printf("N est pair\n");
                    break;
                }
                else
                    printf("N est impair\n");
            else
                printf("Plus petit!\n");
        else
            printf("Plus grand!\n");
    }
    printf("Vous avez reussi en %d coups",i);
    return 0;
}
