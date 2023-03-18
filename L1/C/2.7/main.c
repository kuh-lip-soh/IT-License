#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    printf("ax^2+bx+c=0 | Donnez a,b et c :\n");
    scanf("%d %d %d",&a,&b,&c);
    if(!a)
    {
        if(!b)
            printf("L'equation ne possede aucune solution");
        printf("L'equation possede une solution : x=%.2lf",(double)c/b);
    }
    else
    {
        d=pow(b,2)-4*a*c;
        if(d>0)
            printf("L'equation possede deux solutions : x1=%.2lf x2=%.2lf",(-sqrt(d)-b)/(2*a),(sqrt(d)-b)/(2*a));
        else if(!d)
            printf("L'equation possede une solution double : x=%.2lf",(-b)/(2*a));
        else
            printf("L'equation possede deux solutions complexes");
    }
    return 0;
}
