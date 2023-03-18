#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("Donnez 2 nombres :\n");
    scanf("%d %d",&a,&b);
    printf("\n\n*************** MENU ***************\n1:------------> Somme --------------\n2:------------> Produit ------------\n3:------------> Moyenne ------------\n4:------------> Minimum ------------\n5:------------> Maximum ------------\n\n");
    scanf("%d",&i);
    system("cls");
    switch(i)
    {
    case 1 :
        printf("%d+%d=%d",a,b,a+b);
        break ;
    case 2 :
        printf("%d*%d=%d",a,b,a*b);
        break ;
    case 3 :
        printf("Moy(%d,%d)=%d",a,b,(a+b)/2);
        break ;
    case 4 :
        if(a>b) i=b;
        else i=a;
        printf("Min(%d,%d)=%d",a,b,i);
        break ;
    case 5 :
        if(a>b) i=a;
        else i=b;
        printf("Min(%d,%d)=%d",a,b,i);
        break ;
    }
    return 0;
}
