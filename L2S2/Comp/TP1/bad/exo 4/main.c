#include <stdio.h>
#include <stdlib.h>

void afficheChaine(char chaine[])
{
    int i, n = strlen(chaine), j = 0;
    char ch[100];
    for (i = 0; i < n; i++)
    {
        ch[j] = chaine[i];
        j++;
        ch[j] = ' ';
        j++;
    }
    ch[j] = '\0';
    puts(ch);
}
int voyelle(char chaine[])
{
    int i = 0;
    int nombre = 0;
    for (i = 0; i < strlen(chaine); i++)
    {
        if (chaine[i] == 'a' || chaine[i] == 'o' || chaine[i] == 'u' || chaine[i] == 'e' || chaine[i] == 'i')
        {
            nombre++;
        }
    }
    return nombre;
}
int main()
{
    char chaine[100];
    printf("Entrez votre chaine de caractere : ");
    gets(chaine);
    afficheChaine(chaine);
    voyelle(chaine);
    printf("le nombre de voyelle est de %d", voyelle(chaine));

    return 0;
}
