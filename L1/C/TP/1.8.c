#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tva;
    double ttc,net;
    printf("1-NET->TTC\n2-TTC->NET\n\n");
    scanf("%d",&tva);
    system("cls");
    switch(tva)
    {
    case 1:
        printf("Donnez le prix NET : "); scanf("%lf",&net);
        printf("Donnez la TVA : "); scanf("%d",&tva);
        ttc=net+net*(tva/100.);
        printf("le prix TTC est de %.2lf",ttc);
        break;
    case 2:
        printf("Donnez le prix TTC : "); scanf("%lf",&ttc);
        printf("Donnez la TVA : "); scanf("%d",&tva);
        net=ttc/(1+(tva/100.));
        printf("le prix NET est de %.2lf",net);
        break;
    }

    return 0;
}
