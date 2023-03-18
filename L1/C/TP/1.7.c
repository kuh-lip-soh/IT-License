#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m;
    printf("1-Somme avec 5 variables\n2-Ducoup qu'avec 2\n\n");
    scanf("%d",&i);
    system("cls");
    switch(i)
    {
    case 1:
        i=0;
        printf("Donnez vos 4 nombres !\n");
        scanf("%d",&j);
        scanf("%d",&k);
        scanf("%d",&l);
        scanf("%d",&m);
        i=j+k+l+m;
        printf("La somme de vos nombres = %d",i);
    case 2:
        i=0;
        printf("Donnez vos 4 nombres !\n");
        scanf("%d",&k);
        i+=k;
        scanf("%d",&k);
        i+=k;
        scanf("%d",&k);
        i+=k;
        scanf("%d",&k);
        i+=k;
        printf("La somme de vos nombres = %d",i);
        break;

    }

    return 0;
}
