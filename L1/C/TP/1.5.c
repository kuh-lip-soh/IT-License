#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i;
    printf("1-Premiere methode\n2-La deuxieme evidement\n3-Une derniere ?\n\n");
    scanf("%d",&i);
    system("cls");
    switch(i)
    {
    case 1 :
        printf("Donnez votre X : "); scanf("%d",&x);
        printf("Donnez votre Y : "); scanf("%d",&y);
        printf("X=%d|Y=%d devient X=%d|Y=%d",x,y,y,x);
        break;
    case 2 :
        printf("Donnez votre X : "); scanf("%d",&x);
        printf("Donnez votre Y : "); scanf("%d",&y);
        printf("X=%d|Y=%d devient ",x,y);
        i=x; x=y; y=i;
        printf("X=%d|Y=%d",x,y);
        break;
    case 3 :
        printf("Donnez votre X : "); scanf("%d",&x);
        printf("Donnez votre Y : "); scanf("%d",&y);
        printf("X=%d|Y=%d devient ",x,y);
        x+=y; y=x-y; x=x-y;
        printf("X=%d|Y=%d",x,y);
        break;
    }
    return 0;
}
