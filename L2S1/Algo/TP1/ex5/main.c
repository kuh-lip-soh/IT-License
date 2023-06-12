#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int EstInfinitif (char v[])
{
    int i;
    for(i=0; v[i]!='\0'; i++);
    if(v[i-1]=='r' && (v[i-2]=='e' || v[i-2]=='i'))
        return 1;
    return 0;
}
void Conjuguer (char v[])
{
printf("Je %sai\nTu %sas\nIl/elle %sa\nNous %sons\nVous %sez\nIls/elles %sont\n",v,v,v,v,v,v);
}
int main()
{
    char v[20];
debut :
    printf("Donnez un verbe a l'infinitif : ");
    scanf("%s",&v);
    strlwr(v);
    if (!(EstInfinitif(v)))
    {
        printf("Votre verbe n'est pas a l'infinitif\n\n");
        goto debut;
    }
    Conjuguer(v);
    return 0;
}
