#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void NtoL(char n[], int m)
{
    int i;
    char c[]= {"Cent "};
    char u[][15]= {"Zero ","Un ","Deux ","Trois ","Quatre ","Cinq ","Six ","Sept ","Huit ","Neuf "};
    char d[][15]= {"","Dix ","Vingt ","Trente ","Quarante ","Cinquante ","Soixante ","Soixante-Dix ","Quatre-Vingt ","Quatre-Vingt-Dix "};
    char spe[][15]= {"","Onze ","Douze ","Treize ","Quatorze ","Quinze ","Seize "};
    if(!m)
    {
        strcat(n,u[0]);
        return;
    }
    if(m>=100)
    {
        i=m/100;
        if(i>1)
        strcat(n,u[i]);
        strcat(n,c);
    }
    i=m%100;
    if(!i)
        return 0;
    else if(!(i%10))
        strcat(n,d[i/10]);
    else if(i<10)
        strcat(n,u[i]);
    else if (i<17)
        strcat(n,spe[i%10]);
    else if ((i>=70 && i<=76) || (i>=90 && i<=96))
    {
        strcat(n,d[(i/10)-1]);
        strcat(n,spe[i%10]);
    }
    else
    {
        strcat(n,d[i/10]);
        strcat(n,u[i%10]);
    }
}
int main()
{
    char n[100]={0};
    int i;
    do
    {
        noU :
        printf("Donnez votre de i : ");
        scanf("%d",&i);
        if(i>999 || i<0)
            goto noU;
        NtoL(n,i);
        puts(n);
        n[0]=0;
    }
    while(i);
    return 0;
}
