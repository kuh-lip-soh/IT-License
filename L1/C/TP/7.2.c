#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i;

S_Maj ( char s[] )
{
    for(i=0; i<strlen(s); i++)
    {
        if('z'>=s[i] && s[i]>='a')
            s[i]=s[i]-32;
    }
}

S_Let (char s[])
{
    int j=0;
    for(i=0; i<strlen(s); i++)
    {
        if('z'>=s[i] && s[i]>='a' || 'Z'>=s[i] && s[i]>='A')
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
}

S_Inv (char s[])
{
    int j=strlen(s)-1;
    char d[j+1];
    for(i=0; i<strlen(s); i++)
    {
        d[i]=s[i];
    }
    for(i=0; i<strlen(s); i++)
    {
        s[i]=d[j];
        j--;
    }
}

int S_Mot (char s[])
{
    int j=0;
    for(i=0; i<strlen(s); i++)
        if (s[i]==' ' && s[i+1]!=' ')
            j++;
    return j;
}

int S_FMot (char s[], char m[])
{
    int j=0,f=0;
    for(i=0; i<strlen(s); i++)
        if (s[i]==m[j])
        {
            j++;
            if(j==strlen(m)-1)
            {
                f++;
                j=0;
            }
        }
    return f;
}

void main ()
{
    char m[]="Toto1 Loulou2";
    printf("Avant : %s\n",m);
    S_Maj(m);
    printf("Apres : %s\n",m);
    printf("\n\n\n\n");
    char l[]="aB'3$@kj";
    printf("Avant : %s\n",l);
    S_Let(l);
    printf("Apres : %s\n",l);
    printf("\n\n\n\n");
    char inv[]="cool !";
    printf("Avant : %s\n",inv);
    S_Inv(inv);
    printf("Apres : %s\n",inv);
    printf("\n\n\n\n");
    char p[]="Ceci est une phrase typique, as de pique.";
    printf("%s\n",p);
    printf("Elle contient %d mots\n",S_Mot(p)+1);
    printf("\n\n\n\n");
    char p2[]="Phrase de type random qui est random";
    char mot[]="random";
    printf("%s\nCette phrase contient %d fois le mot ",p2,S_FMot(p2,mot));
    puts(mot);
}
