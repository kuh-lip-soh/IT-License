#include <stdlib.h>
#include <stdio.h>

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
        printf("[%d]=%lf\n",i,t[i]);

    }
}
void ReadMat(int a[10][10],int lm)
{
    int i,j;
    for(i=0; i<lm; i++)
    {
        for(j=0; j<lm; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}
void Descente(double x[],int a[10][10],double b[], int lm)
{
    int i,j;
    double sum;
    printf("Entrez les valeurs de votre matrice :\n");
    ReadMat(a,lm);
    printf("Entrez le vecteur B :\n");
    ReadTab(b,lm);
    x[0]=b[0]/a[0][0];
    for(i=1; i<lm; i++)
    {
        sum=b[i];
        for(j=0; j<=i-1; j++)
        {
            sum=sum-(a[i][j]*x[j]);
        }
        x[i]=sum/a[i][i];
    }
    printf("\n\nLe vecteur X :\n");
    ShowTab(x,lm);
}
void Remontada(double x[],int a[10][10],double b[],int lm)
{
    int i,k;
    double sum;
    printf("Entrez les valeurs de votre matrice :\n");
    ReadMat(a,lm);
    printf("Entrez le vecteur B :\n");
    ReadTab(b,lm);
    x[lm-1]=(b[lm-1])/(a[lm-1][lm-1]);
    for(i=lm-2; i>=0; i--)
    {
        sum=0;
        for(k=i+1; k<=lm-1; k++)
        {
            sum=sum+a[i][k]*x[k];
        }
        x[i]=(b[i]-sum)/a[i][i];
    }
    printf("\n\nLe vecteur X :\n");
    ShowTab(x,lm);
}

int main()
{
    int a[10][10],lm,c;
    double x[10],b[10];
debut :
    system("cls");
    printf("1- La descente\n");
    printf("2- La remontee\n");
    printf("3- Question 3\n");
    printf("Entrez votre choix : ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("\nLa dimension de votre matrice : ");
        scanf("%d",&lm);
        Descente(x,a,b,lm);
        break;
    case 2:
        printf("\nLa dimension de votre matrice : ");
        scanf("%d",&lm);
        Remontada(x,a,b,lm);
        break;
    case 3 :
        printf("Les resultats sont les suivants :\nX1={1,-3,7,-9}\nX2={1.795714,-3.24,2.15,-0.3}");
        break;
    default:
        goto debut;
        break;
    }
    return 0;
}
