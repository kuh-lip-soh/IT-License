#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    printf("Vous avez tape le nombre  : % d", nombre);
    getch();
    return 0;
}