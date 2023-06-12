#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    printf("1-For\n2-While\n3-Do While\n");
    scanf("%d",&k);
    switch(k)
    {
    case 1 :
        for(i=2; i<=1000; i++)
        {
            k=0;
            for(j=1; j<=i/2; j++)
                if (!(i%j))
                    k+=j;
            if (k==i)
                printf("\n%d",k);
        }
        break;
    case 2 :
        i=2;
        while(i<=1000)
        {
            k=0;
            j=1;
            while (j<=i/2)
            {
                if (!(i%j))
                    k+=j;
                j++;
            }
            if(k==i)
                printf("\n%d",k);
            i++;
        }
        break;
    case 3 :
        i=2;
        do
        {
            k=0;
            j=1;
            do
            {
                if (!(i%j))
                    k+=j;
                j++;
            }
            while (j<=i/2);
            if(k==i)
                printf("\n%d",k);
            i++;
        }
        while(i<=1000);
        break;
    }
    return 0;
}
