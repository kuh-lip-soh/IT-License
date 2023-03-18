#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Donnez 2 nombres :\n");
    scanf("%d %d",&a,&b);
    if((a>0 && b >0 )||(a<0 && b<0))
    printf("\n\nLe produit de vos 2 nombres est positif");
        else if(a==0 || b==0)
            printf("\n\nLe produit de vos 2 nombres est nul");
                else
                    printf("\n\nLe produit de vos 2 nombres est negatif");
    return 0;
}
