#include <stdio.h>
#include <stdlib.h>

typedef struct Temps tmp;
struct Temps
{
    int h;
    int m;
};
typedef struct Event Event;
struct Event
{
    char cours[100];
    char lieu[100];
    tmp debut;
    tmp fin;
};
typedef struct Agenda agd;
struct Agenda
{
    Event E[10];
};
void saisieEvent ( Event *E)
{
    printf("Nom du cours : ");
    gets(E->cours);
    printf("Lieu : ");
    gets(E->lieu);
    printf("Heure de debut : \n");
    scanf("%d",&(E->debut.h));
    scanf("%d",&(E->debut.m));
    printf("Heure de fin : \n");
    scanf("%d",&(E->fin.h));
    scanf("%d",&(E->fin.m));
}

void afficherEvent ( Event E )
{
    printf("De %.2d:%.2d a %.2d:%.2d\n%s\n%s",E.debut.h,E.debut.m,E.fin.h,E.fin.m,E.cours,E.lieu);
}

int main()
{
    Event E1;
    saisieEvent(&E1);
    system("cls");
    afficherEvent(E1);
    return 0;
}
