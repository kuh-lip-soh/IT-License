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

void main()
{
    int LM=100,CM=100,L,C;
    Dim(&L,LM,&C,CM);
    int M[L][C];
    Write_Mat(L,C,M);
    system("cls");
    View_Mat(L,C,M);
}

