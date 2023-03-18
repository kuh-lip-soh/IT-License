#include <stdio.h>
#include <stdlib.h>
#include "rlutil.h"

int Fact(int n)
{
    if(n==0)
        return 1;
    return (n*Fact(n-1));
}
int PGCD(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return PGCD(a-b,b);
    return PGCD(a,b-a);
}
int SommeChiffres (int n)
{
    if (n < 10)
        return n;
    return (n%10)+SommeChiffres(n/10);
}
int NombreChiffres(int n)
{
    if(n<10)
        return 1;
    return 1+NombreChiffres(n/10);
}
int main()
{
    int a,b,c,n;
debut :
    system("cls");
    printf("1-Factoriel\n");
    printf("2-PGCD\n");
    printf("3-Somme des chiffres d'un nombre\n");
    printf("4-Nombre de chiffres d'un nombre\n");
    printf("0-Quitter\n");
    printf("Donner votre choix : ");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
    case 0:
        return 0;
    case 1:
        printf("Donnez votre entier : ");
        scanf("%d",&n);
        printf("%d! = %d",n,Fact(n));
        break;
    case 2:
        printf("Donnez vos entiers :\na=");
        scanf("%d",&a);
        printf("b=");
        scanf("%d",&b);
        printf("\nLe PGCD de %d et %d est %d",a,b,PGCD(a,b));
        break;
    case 3:
        printf("Donnez votre entier : ");
        scanf("%d",&n);
        printf("La somme des chiffres de %d est %d",n,SommeChiffres(n));
        break;
    case 4:
        printf("Donnez votre entier : ");
        scanf("%d",&n);
        a=NombreChiffres(n);
        printf("%d contient %d chiffre",n,a);
        if(a>1) printf("s");
        break;
    default :
        goto debut;
        break;
    }
    anykey("\nAppuyer sur une touche pour continuer");
    goto debut;
    return 0;
}
