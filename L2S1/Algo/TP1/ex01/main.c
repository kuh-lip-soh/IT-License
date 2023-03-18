#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,k;
    printf("1-For\n2-While\n3-Do While\n");
    scanf("%d",&k);
    switch(k)
    {
    case 1 :
        for(i=140; i<500; i++)
            if (i==((pow((i%10),3))+pow(((i/10)%10),3)+pow(((i/100)%10),3)))
                printf("\n%d",i);
        break;
    case 2 :
        i=140;
        while(i>=140 && i<=500)
        {
            if (i==((pow((i%10),3))+pow(((i/10)%10),3)+pow(((i/100)%10),3)))
                printf("\n%d",i);
            i++;
        }
        break ;
    case 3 :
        i=139;
        do
        {
            if (i==((pow((i%10),3))+pow(((i/10)%10),3)+pow(((i/100)%10),3)))
                printf("\n%d",i);
            i++;
        }
        while(i>=140 && i<=500);
        break;

    }
    return 0;
}
