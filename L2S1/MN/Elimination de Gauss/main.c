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
    {
        printf("| %lf |",i,t[i]);
    }
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
void Remontada(double x[],double a[10][10],double b[],int lm)
{
    int i,k;
    double sum;
    x[lm-1]=b[lm-1]/a[lm-1][lm-1];
    for(i=lm-2; i>=0; i--)
    {
        sum=0;
        for(k=i+1; k<lm; k++)
            sum=sum+a[i][k]*x[k];
        x[i]=(b[i]-sum)/a[i][i];
    }
    printf("\n\nLe vecteur X :\n");
    ShowTab(x,lm);
}
void Triangul(double a[10][10],double b[],int lm)
{
    int i,j,k;
    double p,c;
    for(i=0; i<lm-1; i++)
    {
        p=a[i][i];
        for(j=i+1; j<lm; j++)
        {
            c=a[j][i]/p;
            b[j]-=c*b[i];
            a[j][i]=0;
            for(k=i+1;k<lm;k++)
                a[j][k]-=c*a[i][k];
        }
    }
}
int main()
{
    int lm;
    double x[10],b[10], a[10][10];
    debut :
    printf("Donnez la dimension de votre matrice : ");
        scanf("%d",&lm);
        if(lm<2) goto debut;
    printf("Entrez les valeurs de votre matrice :\n");
    ReadMat(a,lm);
    printf("Entrez le vecteur B :\n");
    ReadTab(b,lm);
    Triangul(a,b,lm);
    Remontada(x,a,b,lm);
    return 0;
}
