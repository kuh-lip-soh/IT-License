#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int startsWithLetter(char c[])
{
    if (isalpha(c[0]))
        return 1;
    else
        return 0;
}

int isAlphanumeric(char c[])
{
    int i;
    for (i = 0; i < strlen(c) - 1; i++)
    {
        if (!(isalnum(c[i])))
            return 0;
    }
    return 1;
}

int hasUppercase(char c[])
{
    int i;
    for (i = 0; i < strlen(c) - 1; i++)
    {
        if (isupper(c[i]))
            return 1;
    }
    return 0;
}
/*
int startsWithNumber(char c[])
{
    if (isdigit(c[0]))
        return 1;
    else
        return 0;
}
*/

int isLoginCorrect(char c[])
{
    if (startsWithLetter(c) && isAlphanumeric(c))
        return 1;
    else
        return 0;
}

int isPwCorrect(char c[], char d[])
{
    if (strlen(c) > 10 && hasUppercase(c) && strcmp(c, d))
        return 1;
    else
        return 0;
}

int main()
{
    char login[50], pw[50];
login:
    printf("Login : ");
    fgets(login, 50, stdin);
    if (!(isLoginCorrect(login)))
    {
        printf("Error!\n");
        goto login;
    }
pw:
    printf("Password : ");
    fgets(pw, 50, stdin);
    if (!(isPwCorrect(pw, login)))
    {
        printf("Error!\n");
        goto pw;
    }
    return 0;
}