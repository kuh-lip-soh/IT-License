#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

int ADN( char s[] )
{
    int a=0,c=0,g=0,t=0,l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='C')
            c++;
        else if(s[i]=='T')
            t++;
        else if(s[i]=='G')
            g++;
    }
    if (a>0 &c>0 &g>0 &t>0)
        return 1;
    return 0;
}
int CBase ( char s[], char b[])
{
    int l=strlen(s);
    for(i=0; i<l; i++)
        if (s[i]==b[0])
            return i;
}
void PBase(char s[])
{
    double a=0,c=0,g=0,t=0;
    int l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='C')
            c++;
        else if(s[i]=='T')
            t++;
        else if(s[i]=='G')
            g++;
        l--;
    }
    printf("Le nucleotide A consitue %2.lf% de la sequence ADN.\n",a*100/l);
    printf("Le nucleotide C consitue %2.lf% de la sequence ADN.\n",c*100/l);
    printf("Le nucleotide G consitue %2.lf% de la sequence ADN.\n",g*100/l);
    printf("Le nucleotide T consitue %2.lf% de la sequence ADN.\n",t*100/l);
}
void Comp ( char s[], char S[])
{
    int l=strlen(s);
    for(i=0; i<l; i++)
        if(s[i]=='A')
            S[i]='T';
        else if(s[i]=='C')
            S[i]='G';
        else if(s[i]=='G')
            S[i]='C';
        else if(s[i]=='T')
            S[i]='A';
}
int main()
{
    char s[100];
    char b[2];
    printf("Saisissez votre brin d'ADN : ");
    gets(s);
    if (ADN(s))
        puts("Il s'agit bien d'un brin d'ADN.");
    else
    {
        puts("Il ne s'agit pas d'un brin d'ADN parce-qu'il y manque des nucleotides essentiels.");
        return 0;
    }
    puts("\nQuel nucleotide voulez-vous chercher sa premiere apparition ?");
    gets(b);
    printf("Le nucleotide %c apparait a la position %d",b[0],CBase(s,b));
    printf("\n");
    PBase(s);
    char S[100];
    Comp(s,S);
    printf("\nLe complement de votre sequence ADN est %s",S);

    return 0;
}
