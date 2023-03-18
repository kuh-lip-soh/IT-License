#include <stdio.h>
#include <stdlib.h>

void Write_Tab(int T[], int n)
{
    int i;
    printf("Merci de saisir les %d elements de votre tableau :\n",n);
    for(i=0; i<n; i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("\n");
}

int max(int T[], int n)
{
    int i,j=0,p;
    for(i=0; i<n; i++)
    {
        if(T[i]>j)
            p=i;
    }
    return p;
}

void main()
{
    int n,p;
    printf("N=");
    scanf("%d",&n);
    int T[n];
    Write_Tab(T,n);
    system("cls");
    p=max(T,n);
    printf("La valeur maximale que contient le tableau est T[%d]=%d",p,T[p]);

}
