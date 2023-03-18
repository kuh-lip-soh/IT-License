#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; double k;
    printf("1-Kilogramme->Livre\n2-Livre->Kilogramme\n3-Kilometre->Mile\n4-Mile->Kilometre\n5-Metre->Pied\n6-Pied->Metre\n\n");
    scanf("%d",&i);
    system("cls");
    switch(i)
    {
    case 1 :
        printf("Donnez votre poids en kilogramme : ");
        scanf("%lf",&k);
        printf("%lf Kg = %.2lf Livre",k,k/0.4536);
        break;
    case 2 :
        printf("Donnez votre poids en livre : ");
        scanf("%lf",&k);
        printf("%lf Livre= %.2lf Kg",k,k*0.4536);
        break;
    case 3 :
        printf("Donnez votre distance en kilometre : ");
        scanf("%lf",&k);
        printf("%lf Km= %.2lf Mile",k,k/1.609);
        break;
    case 4 :
        printf("Donnez votre distance en mile : ");
        scanf("%lf",&k);
        printf("%lf Mile= %.2lf Km",k,k*1.609);
        break;
    case 5 :
        printf("Donnez votre distance en metre : ");
        scanf("%lf",&k);
        printf("%lf m= %.2lf pied",k,k*3.2809);
        break;
    case 6 :
        printf("Donnez votre distance en pied : ");
        scanf("%lf",&k);
        printf("%lf pied= %.2lf m",k,k/3.2809);
        break;
    }
    return 0;
}
