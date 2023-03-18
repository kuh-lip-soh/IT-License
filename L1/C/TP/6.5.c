#include <stdio.h>
#include <stdlib.h>

void Dim(int *L, int LM, int *C, int CM)
{
    do
    {
        printf("Saisissez le nombre de lignes de votre matrice :");
        scanf("%d",L);
    }
    while(*L<=0  && *L>=LM);
    do
    {
        printf("Saisissez le nombre de colonnes de votre matrice :");
        scanf("%d",C);
    }
    while(*C<=0 && *C>=CM);
}

void Write_Mat(int L, int C,int M[][C])
{
    int i,j;
    for (i=0; i<L; i++)
        for(j=0; j<C; j++)
        {
            printf("M[%d][%d]=",i,j);
            scanf("%d",&M[i][j]);
        }
}

void View_Mat(int L, int C, int M[][C])
{
    int i,j;
    for (i=0; i<L; i++)
    {
        printf("\n");
        for(j=0; j<C; j++)
            printf("|\t%d\t|",M[i][j]);
    }
}

int Carre(int L, int C, int M[][C])
{
    if (L==C)
        return 1;
    return 0;
}

int Somme_Ligne(int L, int C, int M[][C])
{
    int i,S=0;
    for(i=0; i<C; i++)
        S+=M[L][i];
    return S;
}

int Somme_Colonne(int L, int C, int M[][C])
{
    int i,S=0;
    for(i=0; i<L; i++)
        S+=M[i][C];
    return S;
}
int Somme_Diag(int C, int M[][C])
{
    int i,S=0;
    for(i=0; i<C; i++)
        S+=M[i][i];
    return S;
}

int Somme_AntiDiag(int C, int M[][C])
{
    int i,j,S=0;
    for(i=C; i>0; i--)
        for(j=0; j<C; j++)
            S+=M[i][i];
    return S;
}

int TestForN(int N,int L,int C, int M[][C])
{
    int i,j,p=0;
    for(i=C; i>0; i--)
        for(j=0; j<C; j++)
            if(N==M[i][j])
                p++;
    return p;
}

int Carre_Magique(int L, int C, int M[][C])
{
    int i=0,j,n=0;
    if(Carre(L,C,M)&&Somme_AntiDiag(C,M)==Somme_Diag(C,M)&&Somme_Diag(C,M)==Somme_Colonne(L,C,M)&&Somme_Colonne(L,C,M)==Somme_Ligne(L,C,M))
    {
        i=1;
        for(j=1; j<=(C*L); j++)
            n+=TestForN(j,L,C,M);
        if((n/(C*L))==1)
            i=2;
    }
    return i;
}

void main()
{
    int LM=100,CM=100,L,C,i;
    Dim(&L,LM,&C,CM);
    int M[L][C];
    printf("Saisissez les donnees de la premiere Matrice :\n");
    Write_Mat(L,C,M);
    system("cls");
    View_Mat(L,C,M);
    i=Carre_Magique(L,C,M);
    if(i)
        if(i==2)
            printf("\n\nVotre matrice est un carre magique normale.");
        else
            printf("\n\nVotre matrice est un carre magique.");
    else
        printf("\n\nVotre matrice n'est pas un carre magique.");

}
