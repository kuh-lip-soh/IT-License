#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Entrez l'age de l'enfant : ");
    scanf("%d",&a);
    if(a>=12)
        printf("L'enfant est dans la categorie Cadet !");
    else if(a>=10)
        printf("L'enfant est dans la categorie Minime !");
    else if(a>=8)
        printf("L'enfant est dans la categorie Pupille !");
    else if(a>=6)
        printf("L'enfant est dans la categorie Poussin !");
    else
        printf("L'enfant n'est dans aucune categorie !");
    return 0;
}
