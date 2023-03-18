#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    printf("\n");
}

int Tri_Bulle(int t[],int n)
{
    int etime=clock();
    int i,j,k=0;
    for(i=1; i<n; i++)
    {
        if(t[i]<t[i-1])
        {
            k++;
            j=t[i];
            t[i]=t[i-1];
            t[i-1]=j;
        }
        Afficher_Tab(t,i);
    }
    if(!k)
        return (clock()-etime);
    else
        Tri_Bulle(t,n);
    return (clock()-etime);
}
int Tri_Insertion(int t[],int n)
{
    int etime=clock();
    int i,j,k=0;
    for(i=1; i<n; i++)
    {
        k=t[i];
        j=i;
        while(j && t[j-1]>k)
        {
            t[j]=t[j-1];
            j=j-1;
        }
        t[j]=k;
        Afficher_Tab(t,i);
    }
    return (clock()-etime);
}
int Tri_Selection(int t[], int n)
{
    int etime=clock();
    int i=n-1,j,k,u;
    while(i)
    {
        k=0;
        for(j=0; j<=i; j++)
            if(t[j]>t[k])
                k=j;
        u=t[k];
        t[k]=t[i];
        t[i]=u;
        Afficher_Tab(t,i);
    }
    return (clock()-etime);
}
int main()
{
    int i,j,k;
    int t[100];
tab :
    do
    {
        printf("Saisissez la taille de votre tableau : ");
        scanf("%d",&i);
    }
    while(i<1);
    printf("Saisissez les données de votre tableau :\n");
    Saisir_Tab(t,i);
    printf("\n\n");
    Afficher_Tab(t,i);
    printf("\n1-Tri a bulle\n2-Tri par insertion\n3-Tri par selection\n4-Resaisir le tableau\n");
menu :
    printf("Choisissez la methode : ");
    scanf("%d",&k);
    switch(k)
    {
    case 1 :
        k=Tri_Bulle(t,i);
        break;
    case 2 :
        k=Tri_Insertion(t,i);
        break;
    case 3 :
        k=Tri_Selection(t,i);
        break;
    case 4 :
        system("cls");
        goto tab;
        break ;
    default :
        system("cls");
        goto menu;
        break;
    }

    Afficher_Tab(t,i);
    printf("Ca a pris %d ms pour s'executer de cette facon.\n",k);
    goto menu;
    return 0;
}
