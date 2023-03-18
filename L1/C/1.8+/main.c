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
    ttc[i]=net[i]+net[i]*(a[i]*tva/100.);
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
        printf("\n|%23.2lf|%10.2lf|%21d|%16d|%7.2lf|",u[i],net[i],p[i],a[i]*tva,ttc[i]);
    }
    printf("\n|_______________________|__________|_____________________|________________|_______|");
    for(i=1; i<n; i++)
    {
        ttc[0]+=ttc[i];
        net[0]+=net[i];
    }
    printf("\n\nTotal NET : %.2lf Da | Total TTC : %.2lf Da",net[0],ttc[0]);
    if(ttc[0]>6000)
        printf("\nVous beneficiez d'une remise de 12% pour votre achat qui depasse les 6.000Da !\n\nTotal TTC avec remise : %.2lf Da",ttc[0]*0.88);
    else if(ttc[0]>4000)
            printf("\nVous beneficiez d'une remise de 9% pour votre achat qui depasse les 4.000Da !\n\nTotal TTC avec remise : %.2lf Da",ttc[0]*0.91);
        else if(ttc[0]>2000)
                printf("\nVous beneficiez d'une remise de 5% pour votre achat qui depasse les 2.000Da !\n\nTotal TTC avec remise : %.2lf Da",ttc[0]*0.95);

    return 0;
}
