#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,i;
    printf("Donnez A,B,C et D (ils seront ordonnes de cette maniere [M(A,B),m(A,B)] et [M(C,D),m(C,D)]):\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)
    {
        i=a;
        a=b;
        b=i;
    }
    if(c>d)
    {
        i=c;
        c=d;
        d=i;
    }
    if(a>c)
        if(a<d)
            if(b>d)
                printf("L'intesection de [%d,%d] et [%d,%d] est [%d,%d]",a,b,c,d,a,d);
            else
                printf("L'intesection de [%d,%d] et [%d,%d] est [%d,%d]",a,b,c,d,a,b);
        else if(a==d)
                printf("[%d,%d] et [%d,%d] s'intersectent au point %d",a,b,c,d,d);
            else
                printf("[%d,%d] et [%d,%d] ne s'intersectent pas",a,b,c,d);
    else if(b>c)
            if (b>d)
                printf("L'intesection de [%d,%d] et [%d,%d] est [%d,%d]",a,b,c,d,c,d);
            else
                printf("L'intesection de [%d,%d] et [%d,%d] est [%d,%d]",a,b,c,d,c,b);
        else if(b==c)
                printf("[%d,%d] et [%d,%d] s'intersectent au point %d",a,b,c,d,c);
            else
                printf("[%d,%d] et [%d,%d] ne s'intersectent pas",a,b,c,d);



    return 0;
}
