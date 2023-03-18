#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    double ht,ttc,r;
    printf("Valeur de votre article : ");
    scanf("%lf",&ht);
    printf("Quantite commandee : ");
    scanf("%d",&q);
    ht=ht*q;
    ttc=ht*1.11;
    printf("Prix HT : %.2lf Da | Prix TTC : %.2lf Da\n",ht,ttc);
    if (q>=60)
        r=ttc*0.2;
    else if(q>=30)
        r=ttc*0.15;
    else if(q>=10)
        r=ttc*0.10;
    else if(q>=5)
        r=ttc*0.05;
    else
        r=0;
    ttc-=r;
    if(r)
        printf("Vous beneficiez d'une remise !\nMontant de la remise : %.2lf\nTTC avec remise : %.2lf",r,ttc);
    return 0;
}
