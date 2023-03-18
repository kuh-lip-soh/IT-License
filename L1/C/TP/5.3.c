#include <stdio.h>
#include <stdlib.h>

void Premiere (int aval)
{
    int a;
    a = aval;
    printf("a=%d et &a=%p\n",a,&a);
}

void Deuxieme (int bval)
{
    int b;
    printf("b=%d et &b=%p\n",b,&b);
}

void main ()
{
    Premiere(3);
    Premiere(8);
    Deuxieme(17);
    /* L'adresse de a et b sont identiques parce-qu'une fois sortie de la fonction, on initialise une nouvelle variable a la
    même adresse */
}
