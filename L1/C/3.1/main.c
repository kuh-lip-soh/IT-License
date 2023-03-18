#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,a=0,n=0,p=1,s=0;
    while(a<=0)
    {
        printf("Donnez n positif : ");
        scanf("%d",&a);
    }

    printf("\n");
    do
    {
    printf("n%d = ",i+1);
    scanf("%d",&n);
        s+=n,p*=n;
        i++;
    }while(i<=n);
    printf("\nProduit=%d\nSomme=%d\nMoyenne=%.2lf",p,s,(double)s/a);
    return 0;
}
