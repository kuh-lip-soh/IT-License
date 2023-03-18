#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int z; double n;
    printf("Donnez le numero atomique de l'atome(Z) : ");scanf("%d",&z);
    printf("Donnez le niveau concerne de l'atome(n) : ");scanf("%lf",&n);
    printf("\nL'energie de votre atome est de %.3lf eV",-((pow(z,2))/(pow(n,2)))*13.6);
    return 0;
}
