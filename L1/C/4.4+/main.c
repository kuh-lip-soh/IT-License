#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int FindFirst(int *e)
{
    int i=0;
    while(1)
    {
        if(e[i])
            return i;
        i++;
    }
}

void mltp(int n)
{
    int i,j=0,m[11],e[11];
    for(i=0; i<11; i++)
    {
        printf("%d*%d=",n,i);
        scanf("%d",&m[i]);
        if(m[i]!=n*i)
        {
            e[i]=1;
            j++;
        }
    }
    if(!j)
        printf("\nVous n'avez fait aucune erreur, bravo !\n");
    else if(j==1)
    {
        j=FindFirst(e);
        printf("\nVous n'avez fait qu'une seule erreur : %d*%d=%d et non %d\n",n,j,n*j,m[j]);
    }
    else
    {
        system("cls");
        printf("\nVous avez fait %d erreurs :\n",j);
        for(i=0; i<=j; i++)
        {
            printf("%d*%d=%d",n,i,n*i);
            if((n*i)!=m[i])
                printf(" ! %d\n",m[i]);
            else
                printf("\n");
        }


    }
}
void powa(int n)
{
int i,j=0,m[11],e[11];
    for(i=0; i<5; i++)
    {
        printf("%d^%d=",n,i);
        scanf("%d",&m[i]);
        if(m[i]!=pow(n,i))
        {
            e[i]=1;
            j++;
        }
    }
    if(!j)
        printf("\nVous n'avez fait aucune erreur, bravo !\n");
    else if(j==1)
    {
        j=FindFirst(e);
        printf("\nVous n'avez fait qu'une seule erreur : %d^%d=%d et non %d\n",n,j,pow(n,j),m[j]);
    }
    else
    {
        system("cls");
        printf("\nVous avez fait %d erreurs :\n",j);
        for(i=0; i<=j; i++)
        {
            printf("%d^%d=%d",n,i,pow(n,i));
            if(pow(n,i)!=m[i])
                printf(" ! %d\n",m[i]);
            else
                printf("\n");
        }


    }
}

int main()
{
    int i,n;
    printf("1-Reviser les multiplications\n2-Reviser les puissances\n\n");
    scanf("%d",&i);
    system("cls");
    switch(i)
    {
    case 1 :
        printf("N = ");
        scanf("%d",&n);
        mltp(n);
        break;
    case 2:
        printf("N = ");
        scanf("%d",&n);
        powa(n);
        break ;
    }
}
