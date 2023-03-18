#include <stdio.h>
#include <stdlib.h>
void ReadTab(double t[],int lm)
{
    int i;
    for(i=0; i<lm; i++)
    {
        printf("[%d]=",i);
        scanf("%lf",&t[i]);
    }
}
void ShowTab(double t[],int lm)
{
    int i;
    for(i=0; i<lm; i++)
        printf("| %.2lf |",t[i]);
}
void ReadMat(double a[10][10],int lm)
{
    int i,j;
    for(i=0; i<lm; i++)
    {
        for(j=0; j<lm; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%lf",&a[i][j]);
        }
        printf("\n");
    }
}
void ShowMat (double a[10][10],int lm)
{
    int i,j;

    for(i=0; i<lm; i++)
    {
        for(j=0; j<lm; j++)
            printf("| %.2f |",a[i][j]);
        printf("\n");
    }
}
void Remontada(double M[10][10],double T[],int n)
{
    int i,j;

    double sum,X[n];

    X[n-1]=T[n-1]/M[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<=n-1;j++)
        sum = sum + (M[i][j]*X[j]);
        X[i]=(T[i]-sum)/M[i][i];
    }
    printf("\n\nLe vecteur X :\n");
    ShowTab(X,n);
}
void Gauss(double M[10][10],double T[],int n)
{
    int i,j,k,l,p,y;
    double pivot,c,temp,TA;


    for(k=0; k<=n-2; k++)
    {
        pivot=M[k][k];
        for(l=k+1; l<n; l++)
        {
            if(pivot<M[l][k])
            {
                pivot=M[l][k];
                p=l;
            }
        }
        TA=T[k];
        T[k]=T[p];
        T[p]=TA;
        for(y=k; y<n; y++)
        {
            temp=M[k][y];
            M[k][y]=M[p][y];
            M[p][y]=temp;
        }
        printf("\nPivot N°%d = %.2f \n",k+1,pivot);
        for(i=k+1; i<n; i++)
        {
            c=M[i][k]/pivot;
            T[i]=T[i]-(c*T[k]);
            M[i][k]=0;
            for(j=k+1; j<n; j++)
                M[i][j]=M[i][j]-(c*M[k][j]);
        }
        printf("Iteration N°%d \n",k+1);
        ShowMat(M,n);
        printf("\n");
        ShowTab(T,n);
        printf("\n");
    }
    printf("\n");
    printf(" La nouvelle matrice est :\n");
    ShowMat(M,n);
    printf("\n");
    printf(" Le nouveau Tableau est :\n");
    ShowTab(T,n);
}
int main()
{
    int lm;
    double b[10], a[10][10];
debut :
    printf("Donnez la dimension de votre matrice : ");
    scanf("%d",&lm);
    if(lm<2) goto debut;
    printf("Entrez les valeurs de votre matrice :\n");
    ReadMat(a,lm);
    printf("Entrez le vecteur B :\n");
    ReadTab(b,lm);
    Gauss(a,b,lm);
    Remontada(a,b,lm);
    return 0;
}
