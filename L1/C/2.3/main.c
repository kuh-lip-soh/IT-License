#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,m,a;
    printf("Donnez un jour, un mois et une annee :\n");
    scanf("%d %d %d",&j,&m,&a);
    if(a>0&&m>0&&m<=12&&j>0&&j<=31)
    {
        if ((!(a%4)&&a%100)||!(a%400))
            printf("\nVotre date est correcte et votre annee est bissextile");
        else if((!(m%2)&&m<7)||(m%2&&m>7)&&(j==31))
            printf("\nVotre date est eronee");
        else if(m==2&&(j==30||j==29))
            printf("\nVotre date est eronee");
        else
            printf("\nVotre date est correcte");
    }
    else
        printf("\nVotre date est eronee");

    return 0;
}
