#include <stdio.h>
#include <stdlib.h>
#include "rlutil.h"

int ReadNTab(int t[])
{
    int n;
    printf("Donnez la taille du tableau : ");
    scanf("%d",&n);
    ReadTab(t,n,0);
    return n;
}
void ReadTab(int t[],int n,int i)
{
    if(i<n)
    {
        scanf("%d",&t[i]);
        ReadTab(t,n,++i);
    }

}
void ShowTab(int t[],int n,int i)
{
    if(i<n)
    {
        printf("| %d |",t[i]);
        ShowTab(t,n,++i);
    }
}
int SommeTab(int t[],int n,int i)
{
    if(i<n)
        return t[i]+(SommeTab(t,n,i));
}
int Occurences(int t[],int n,int i,int v)
{
    if(i<n)
        if(t[i]==v)
            return 1+Occurences(t,n,i,v);
    return 0+Occurences(t,n,i,v);
}
int Dichotomie(int t[],int v,int sup,int inf)
{
    if(inf>sup)
        return 0;
    int m=(inf+sup)/2;
    if(t[m]==v)
        return 1;
    if(t[m]>v)
        return Dichotomie(t,v,m-1,inf);
    return Dichotomie(t,v,sup,m+1);
}
void Classer(int t[],int n,int v)
{
    if(t[n-1]<=v)
        t[n]=v;
    else
    {
        t[n]=t[n-1];
        Classer(t,n-1,v);
    }
}
void Communs(int a[],int b[],int n,int m)
{
    if(n<=0 || m<=0)
        return 0;
    if(a[n-1]>b[m-1])
        Communs(a,b,n-1,m);
    if(b[m-1]>a[n-1])
        Communs(a,b,n,m-1);
    if(a[n-1]==b[m-1])
    {
        printf("| %d |",a[n-1]);
        Communs(a,b,n-1,m-1);
    }
}
int main()
{
    int a[100],b[100],c,n,m,v;
debut :
    system("cls");
    printf("1-Saisir un tableau\n");
    printf("2-Afficher un tableau\n");
    printf("3-Somme des elements d'un tableau\n");
    printf("4-Nombre d'occurences d'un nombre\n");
    printf("5-Rechercher un nombre\n");
    printf("6-Classer un nombre\n");
    printf("7-Elements communs de 2 tableaux\n");
    printf("0-Quitter\n");
    printf("Donner votre choix : ");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
    case 0:
        return 0;
    case 1:
        n=ReadNTab(a);
        break;
    case 2:
        ShowTab(a,n,0);
        break;
    case 3:
        n=ReadNTab(a);
        printf("\nLa somme des elements de votre tableau est %d",SommeTab(a,n,0));
        break;
    case 4:
        n=ReadNTab(a);
        printf("Donnez l'entier a chercher : ");
        scanf("%d",&v);
        printf("\n%d est present %d fois dans le tableau",v,Occurences(a,n,0,v));
        break;
    case 5:
        n=ReadNTab(a);
        printf("Donnez l'entier a chercher : ");
        scanf("%d",&v);
        m=Dichotomie(a,v,n,0)+1;
        printf("%d se classe a la %d",v,m);
        if(m==1)
            printf("ere");
        else
            printf("eme");
        printf(" position dans votre tableau");
        break;
    case 6:
        n=ReadNTab(a);
        printf("Donnez l'entier a classer : ");
        scanf("%d",&v);
        Classer(a,n,v);
        ShowTab(a,n,0);
        break;
    case 7:
        n=ReadNTab(a);
        m=ReadNTab(b);
        printf("Liste des elements communs :\n");
        Communs(a,b,n,m);
        break;
    default :
        goto debut;
        break;
    }
    anykey("\nAppuyer sur une touche pour continuer");
    goto debut;
    return 0;
}
