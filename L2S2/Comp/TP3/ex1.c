#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Q0 0
#define Q1 1

/*int AEF_Multiple_5(char* nbr){
    int i, n=strlen(nbr);
    int etat_automate=0, etat_finale=1;
        // parcourir la chaine de caractères
    for(i=0; (i<n) && (nbr[i]!='\0'); i++)
        switch(etat_automate){
// si le chiffre courant == 0 ou 5 le nombre devient multiple de 5
        case Q0:
            if(nbr[i]=='0'||nbr[i]=='5')
                etat_automate=1;
// sinon le nombre n'est pas un multiple de 5 (a cet étape)
            else if(isdigit(nbr[i]))
                etat_automate= 0;
// si le caractère n'est pas un chiffre, ce n'est pas un nombre et ce n'est pas multiple de 5
                else
        return 0;
break;
// si le chiffre courant == 0 ou 5 le nombre reste multiple de 5
        case Q1:
            if(nbr[i]=='0'||nbr[i]=='5')
                etat_automate=1;
 // sinon le nombre n'est pas un multiple de 5
            else if(isdigit(nbr[i]))
                etat_automate= 0;
// si le caractère n'est pas un chiffre, ce n'est pas un nombre et ce n'est pas multiple de 5 (a cet étape)
                else
                    return 0;
            break;
        }
// teste si l'état courant après le parcours de la chaine de caractère est un état final (Q1 est l'état final)
return (etat_automate==Q1);
}*/

int AEF_L1(char* nbr){
    int i, n=strlen(nbr);
    int etat_automate=0, etat_finale=1;
    for(i=0; (i<n) && (nbr[i]!='\0'); i++)
        switch(etat_automate){
            case Q0:
            if(nbr[i]=='b')
             etat_automate=1;
            else if(nbr[i]=='a')
            etat_automate=0;
            else
            return 0;
             break;
            case Q1:
            return Q1;
            break;
        }
