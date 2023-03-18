#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j;
    printf("Donnez un chiffre : ");
    scanf("%d",&j);
    switch(j%7)
    {
    case 0 :
        printf("Le jour de la semaine correspondant est Samedi");
    break ;
    case 1 :
        printf("Le jour de la semaine correspondant est Dimanche");
    break ;
    case 2 :
        printf("Le jour de la semaine correspondant est Lundi");
    break ;
    case 3 :
        printf("Le jour de la semaine correspondant est Mardi");
    break ;
    case 4 :
        printf("Le jour de la semaine correspondant est Mercredi");
    break ;
    case 5 :
        printf("Le jour de la semaine correspondant est Jeudi");
    break ;
    case 6 :
        printf("Le jour de la semaine correspondant est Vendredi");
    break ;
    }
    return 0;
}
