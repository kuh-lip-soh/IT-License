#include <stdio.h>

char calc(char a[],int c,int b)
{
    char tour=(c%2==0)?'X':'O';
    if(b==1)
        a[0]=tour;
    else if(b==2)
        a[1]=tour;
    else if(b==3)
        a[2]=tour;
    else if(b==4)
        a[3]=tour;
    else if(b==5)
        a[4]=tour;
    else if(b==6)
        a[5]=tour;
    else if(b==7)
        a[6]=tour;
    return tour;
}
int calc2(char a[],int i,char c)
{
    char tour=(c%2==0)?'X':'O';
    for(int e=0;e<5;e++)
    {
        if(a[i+7]==' ')
        {
            a[i+7]=a[i];
            a[i]=' ';
            i+=7;
        }
        else
            return 0;
    }
}
