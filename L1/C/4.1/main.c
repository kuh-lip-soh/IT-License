#include <stdio.h>
#include <stdlib.h>

void Ligne(int n, char c)
{
    int i;
    for(i=0; i<n; i++)
        printf("%2.c",c);
    printf("\n");
}

void Carre(int n, char c)
{
    int i;
    for(i=0; i<n; i++)
        Ligne(n,c);
}

void Triangle(int n,char c,int s)
{
    int i;
    if(!s)
        for(i=1; i<=n; i++)
            Ligne(i,c);
    else
        for(i=n; i>0; i--)
            Ligne(i,c);
}

void GrandTriangle(int n,char c)
{
    Triangle(n,c,0);
    Triangle(n-1,c,1);
}

int main()
{
    int n,i;
    char c;
    printf("Quel forme voulez-vous dessinez ?\n1-Ligne\n2-Carre\n3-Triangle\n4-Grand Triangle\n\n");
    do
    {
        scanf("%d",&i);
    }
    while(i<1 || i>4);
    system("cls");
    switch(i)
    {
    case 1 :
        do
        {
            printf("N = ");
            scanf("%d",&n);
        }
        while(n<=0);
        printf("C = ");
        getchar();
        scanf("%c",&c);
        Ligne(n,c);
        break;
    case 2 :
        do
        {
            printf("N = ");
            scanf("%d",&n);
        }
        while(n<=0);
        printf("C = ");
        getchar();
        scanf("%c",&c);
        Carre(n,c);
        break;
    case 3 :
        do
        {
            printf("N = ");
            scanf("%d",&n);
        }
        while(n<=0);
        printf("C = ");
        getchar();
        scanf("%c",&c);
        printf("Sens du triangle : ");
        scanf("%d",&i);
        Triangle(n,c,i);
        break;
    case 4 :
        do
        {
            printf("N = ");
            scanf("%d",&n);
        }
        while(n<=0);
        printf("C = ");
        getchar();
        scanf("%c",&c);
        GrandTriangle(n,c);
        break;
    }

    return 0;
}
