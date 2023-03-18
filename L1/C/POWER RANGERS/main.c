#include <stdio.h>
#include "affichage.h"
#include "verif_cases+position.h"
#include "victoire.h"

int main(int argc, char *argv[])
{
    affv();
    int c=0;
    char a[42]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    int b;
    char e;
    do
    {
        scanf(" %d",&b);
        e=calc(a,c,b);
        calc2(a,b-1,c); // "-1" parce que t'a les cases de 0 a 6 et tu scan de 1 a 7
        aff(a);
        c++;
    }
    while(verif(a,e));
}
