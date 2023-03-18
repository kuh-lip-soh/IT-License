#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("Donnez 5 entiers :\n");
    scanf("%d",&i);
    scanf("%d",&j);
    if(i>j)
        i=j;
    scanf("%d",&j);
    if(i>j)
        i=j;
    scanf("%d",&j);
    if(i>j)
        i=j;
    scanf("%d",&j);
    if(i>j)
        i=j;
        printf("%d est le plus petit des entiers que vous avez saisi !",i);
    return 0;
}
