#include <stdio.h>
#include <stdlib.h>

void View_Tab(int T[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("T[%d]=%d\n",i,T[i]);
    }
    printf("\n");
}

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

double Medium_Tab (int T[], int n)
{
    int i;
    double j=0;
    for (i=0; i<n; i++)
    {
        j+=T[i];
    }
    return j/n;
}
void main()
{
    int n;
    double m;
    printf("N=");
    scanf("%d",&n);
    int T[n];
    Write_Tab(T,n);
    system("cls");
    View_Tab(T,n);
    m=Medium_Tab(T,n);
    printf("Voici la moyenne des chiffres que contient votre tableau : %.2lf\n\n\n",m);
}
