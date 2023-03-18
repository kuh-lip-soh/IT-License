#include <stdio.h>
#include <stdlib.h>

void produit (double u[], double net[], int p[],int a[],double ttc[],int tva, int i)
{
    printf("\nDonnez le prix unitaire du produit %d : ",i+1);
    scanf("%lf",&u[i]);
    printf("Combien d'exemplaires de ce produit avez-vous ? ");
    scanf("%d",&p[i]);
    printf("La TVA est-elle appliquee sur ce produit ? (1 pour oui, 0 sinon) ");
    scanf("%d",&a[i]);
    net[i]=u[i]*p[i];
    ttc[i]=net[i]*(a[i]*tva);
}

int main()
{
    int i,n,p[100],tva,a[100];
    double ttc[100],net[100],u[100];
    printf("Combien de produits avez-vous ? ");
    scanf("%d",&n);
    printf("Donnez la TVA : ");
    scanf("%d",&tva);
    for(i=0; i<n; i++)
    {
        produit(u,net,p,a,ttc,tva,i);
    }
    system("cls");
    printf(" _________________________________________________________________________________\n");
    printf("|     Prix unitaire     | Prix NET |  Nombre d'articles  |  TVA Appliquee |  TTC  |");
    for(i=0; i<n; i++)
    {
        printf("\n|%23lf|%10lf|%21d|%16d|%7lf|",u[i],net[i],p[i],a[i]*tva,ttc[i]);
    }
    printf("\n _________________________________________________________________________________");

    return 0;
}
