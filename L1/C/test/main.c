#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n,sd=0;
    int d[100];
    for(n=200;n<500;n++)
    {
    for(i=1,j=0,sd=0;i<n;i++)
        if(!(n%i))
        {
            d[j]=i;
            j++;
            sd+=i;
        }

    if(n==sd)
    {
        printf("%d est un nombre parfait car %d=%d",n,n,d[0]);
        for(i=1; i<j; i++)
            printf("+%d",d[i]);
    }
    else
        printf("%d n'est pas un nombre parfait\n",n);

    }
    return 0;
}
