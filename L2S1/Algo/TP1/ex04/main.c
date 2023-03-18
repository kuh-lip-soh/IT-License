#include <stdio.h>
#include <stdlib.h>

void ShowTime(int t)
{
    int m=0,h=0;
    if(t>60)
        m=t/60;
    if(m>60)
        h=m/60;
    printf("%dh:%dm:%ds\n",h,m%60,t%60);
}
int main()
{
    int t;
f:
    printf("Temps en secondes : ");
    scanf("%d",&t);
    if(!t)
        return 0;
    ShowTime(t);
    goto f;
    return 0;
}
