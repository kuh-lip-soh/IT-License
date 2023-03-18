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

void View_Mat(int L, int C,int M[][C])
{
    int i,j;
    for (i=0; i<L; i++)
        for(j=0; j<C; j++)
            printf("M[%d][%d]=%d\n",i,j,M[i][j]);
}


void Sum_Mat(int L, int C, int M[][C], int T[][C], int S[][C])
{
    int i,j;
    for (i=0; i<L; i++)
        for(j=0; j<C; j++)
        S[i][j]=M[i][j]+T[i][j];
}

void Tra_Mat (int L,int C, int M[][C], int T[][L])
{
    int i,j;
    for (i=0; i<L; i++)
        for(j=0; j<C; j++)
            T[j][i]=M[i][j];
}

void main()
{
    int LM=100,CM=100,L,C;
    Dim(&L,LM,&C,CM);
    int M[L][C]; printf("Saisissez les donnees de la premiere Matrice :\n");
    Write_Mat(L,C,M);
    system("cls");
    int T[L][C]; printf("Saisissez les donnees de la deuxieme Matrice :\n");
    Write_Mat(L,C,T);
    int S[L][C];
    Sum_Mat(L,C,M,T,S);
    system("cls");
    printf("Voici la somme des deux matrices :\n");
    View_Mat(L,C,S);
    int TM[C][L];int TT[C][L];
    Tra_Mat(L,C,M,TM);Tra_Mat(L,C,T,TT);
    printf("\n\nTransposee de la Matrice 1 :\n"); View_Mat(C,L,TM);
    printf("\n\nTransposee de la Matrice 2 :\n"); View_Mat(C,L,TT);
}
