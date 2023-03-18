#include <stdio.h>
#include <stdlib.h>
#include "rlutil.h"

void Saisir_Tab(int T[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("[%d] = ",i);
        scanf("%d",&T[i]);
    }

}
void Afficher_Tab(int T[],int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d|",T[i]);
}
void Saisir_Mat(int M[100][100],int l,int c)
{
    int i,j;
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
        {
            printf("[%d,%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
}
void Afficher_Mat(int M[][100],int l,int c)
{
    int i,j;
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            printf("%d|",M[i][j]);
        printf("\n");
    }
}
void Matrice_ID (int M[][100],int n)
{
    int i;
    for(i=0; i<n; i++)
        M[i][i]=1;
    Afficher_Mat(M,n,n);
}
void Somme_Mat (int M[][100], int N[][100], int l, int c)
{
    Afficher_Mat(M,l,c);
    int i,j;
    for(i=0; i<l; i++)
        for(j=0; j<c; j++)
            M[i][j]+=N[i][j];
    printf ("\n+\n\n");
    Afficher_Mat(N,l,c);
    printf("\n=\n\n");
    Afficher_Mat(M,l,c);
}
void Produit_Mat(int M[][100], int N[][100], int P[][100], int l, int c, int u)
{
    int i,j,k;

    for(i=0; i<l; i++)
        for(j=0; j<u; j++)
            for(k=0; k<c; k++)
                P[i][j]+=M[i][k]*N[k][j];

    Afficher_Mat(M,l,c);
    printf("\n*\n\n");
    Afficher_Mat(N,c,u);
    printf("\n=\n\n");
    Afficher_Mat(P,l,u);
}
int TriInf (int M[][100],int n)
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(M[i][j])
                return 0;
    return 1;
}
int TriSup (int M[][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=i-1;j>=0;j--)
        if(M[i][j])
                return 0;
    return 1;
}
int Sym_Mat(int M[][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(M[i][j]=!M[j][i])
        return 0;
    return 1;
}
void Trans_Mat (int M[][100], int N[][100], int l, int c)
{
    int i,j;
    for(i=0;i<l;i++)
        for(j=0;j<c;j++)
            N[j][i]=M[i][j];
}
int main()
{
    int k=1,i,j,u,l,id,sup,inf,sym;
    int M[20][20], mid[50][50], N[20][20], P[20][20], T[100];
    while(k)
    {
        system("cls");
        printf("Que voulez-vous faire ?\n1-Saisir un tableau\n2-Afficher un tableau\n3-Saisir une matrice\n4-Afficher une matrice\n5-Matrice identité\n6-Somme de matrices\n7-Produit de matrices\n8-Testez votre matrice\n9-Transposée d'une matrice\n0-Quitter le programme\n\n");
        scanf("%d",&k);
        switch(k)
        {
        case 1 :
            system("cls");
            printf("Donnez la taille de votre tableau : ");
            scanf("%d",&l);
            Saisir_Tab(T,l);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 2 :
            system("cls");
            Afficher_Tab(T,l);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 3 :
            system("cls");
            printf("Donner la taille de vos matrices :\nLignes : ");
            scanf("%d",&i);
            printf("Colonnes : ");
            scanf("%d",&j);
            printf("\n\n");
            Saisir_Mat(M,i,j);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 4 :
            system("cls");
            Afficher_Mat(M,i,j);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 5 :
            system("cls");
            printf("Donner la taille de votre matrice : ");
            scanf("%d",&id);
            printf("\n\n");
            Matrice_ID(mid,id);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 6 :
            system("cls");
            printf("Donner la taille de vos matrices :\nLignes : ");
            scanf("%d",&i);
            printf("Colonnes : ");
            scanf("%d",&j);
            Saisir_Mat(M,i,j);
            Saisir_Mat(N,i,j);
            Somme_Mat(M,N,i,j);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 7 :
            system("cls");
            printf("Donner la taille de vos matrices :\nLignes Mat1 : ");
            scanf("%d",&i);
            printf("Colonnes Mat1 et lignes Mat2: ");
            scanf("%d",&j);
            printf("Colonnes Mat2: ");
            scanf("%d",&u);
            Saisir_Mat(M,i,j);
            Saisir_Mat(N,j,u);
            Produit_Mat(M,N,P,i,j,u);

            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 8 :
            system("cls");
            printf("Donnez la taille de la matrice carré : ");
            scanf("%d",&i);
            Saisir_Mat(M,i,i);
            printf("\n");
            Afficher_Mat(M,i,i);
            sup=TriSup(M,i);
            inf=TriInf(M,i);
            sym=Sym_Mat(M,i);
            if(sup && inf)
                printf("Votre matrice carré est diagonale et donc symetrique");
            else if (sup)
                printf("Votre matrice carré est triangulaire supérieur");
            else if (inf)
                printf("Votre matrice carré est triangulaire inférieur");
            else if(sym)
                printf("Votre matrice est symétrique");
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 9 :
            system("cls");
            printf("Donner la taille de votre matrices :\nLignes : ");
            scanf("%d",&i);
            printf("Colonnes : ");
            scanf("%d",&j);
            Saisir_Mat(M,i,j);
            printf("\n");
            Afficher_Mat(M,i,j);
            Trans_Mat(M,N,i,j);
            printf("\n");
            Afficher_Mat(N,j,i);
            anykey("\nAppuyer sur une touche pour continuer");
            break;
        case 0 :
            return 0;
            break;
        }
    }
    return 0;
}
