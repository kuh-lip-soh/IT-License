#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s;
    for(j=1; j<101; j++)
    {
        s=0;
        for(i=1; i<(j/2); i++)
            if(!(j%i))
                s+=i;
        if(s==j+1)
            printf("%d\n",j);
    }
    return 0;
}
