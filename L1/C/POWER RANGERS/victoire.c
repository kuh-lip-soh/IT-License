#include <stdio.h>

int verif(char Case[],char b)
{
    for(int limite_hor=6;limite_hor<42;limite_hor+=7)//Verifie les cases horizontalement
    {
        for(int i=0;i+3<=limite_hor;i++)
        {
            if(Case[i]==b && Case[i+1]==b && Case[i+2]==b && Case[i+3]==b)
                return 0;
        }
    }

    for(int i2=0;i2<42;i2++)//Verifie les cases verticalement
    {
        for(int e=0;e<4;e++)
        {
            if(Case[i2]==b && Case[i2+7]==b && Case[i2+14]==b && Case[i2+21]==b)
                return 0;
        }
    }
    for(int e2=0;e2<3;e2++)//Verifie les cases diagonalement
    {
        for(int i3=e2*7;i3<((e2*7)+4);i3++)
        {
            if(Case[i3]==b && Case[i3+8]==b && Case[i3+16]==b && Case[i3+24]==b)
                return 0;
        }
        for(int i4=e2*7+6;i4>(e2*7+2);i4--)
        {
            if(Case[i4]==b && Case[i4+6]==b && Case[i4+12]==b && Case[i4+18]==b)
                return 0;
        }
    }
}
