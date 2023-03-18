#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int p;
    printf("1-Calcul successif\n2-Premiere puissance de 2\n3-Suite de Fibonacci\n\n");
    scanf("%d",&p);
    system("cls");
    int i,n,a,b,c;
    switch(p)
    {
    case 1 :
        do
        {
            printf("Donnez un entier positif : ");
            scanf("%d",&a);
        }
        while(a<=0);
        do
        {
            printf("Donnez un autre entier positif : ");
            scanf("%d",&b);
        }
        while(b<=0);
        c=a;
        for(i=0; a>=b; i++)
        {
            a-=b;
            printf("%d-%d=%d\n",a+b,b,a);
        }
        printf("\n%d=%d*%d+%d",c,b,i,a);
        break;
    case 2 :
        do
        {
            printf("Donnez un entier positif : ");
            scanf("%d",&n);
        }
        while(n<0);
        a=1;i=0;
        while(a)
        {
            if(a>n)
                break;
            else
            {
                i++;
                a=pow(2,i);
            }
        }
        printf("2^%d est la premiere puissance de 2 depassant %d",i,n);
        break ;
    case 3 :
        printf("U0 = ");
        scanf("%d",&b);
        printf("U1 = ");
        scanf("%d",&c);
        printf("n = ");
            scanf("%d",&n);
            for(i=0; i<n; i++)
        {
            a=b+c;
            c=b;
            b=a;
        }
        printf("U%d = %d",n,a);
        break ;
    default :
        printf("Apprends a lire..");
        break ;
    }
    return 0;
}
