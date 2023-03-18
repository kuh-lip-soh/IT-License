#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define Q0 0
#define Q1 1
#define Q2 2
#define Q3 3
#define Q4 4
#define Q5 5

#define IDENTIFIANT_UL 260
#define NOMBRE_UL 261
#define OPERATEUR_ARETHMETIQUE 262
#define SEPERATEUR_VIRGULE 263
#define SEPERATEUR_POINT_VIRGULE 264
#define ACCOLADE_OUVRANTE 265
#define ACCOLADE_FERMANTE 266
#define OPERATEUR_RELATIONNEL 267
#define OPERATEUR_LOGIQUE 268
#define SELECT_KW 269
#define FROM_KW 270
#define WHERE_KW 271
#define COUNT_KW 272
#define DISTINCT_KW 273
#define EPSILON 111
#define fin 333
#define ERREUR -99

typedef struct Unite_Lexicale
{
    char Lexeme[20];
    int Code;
    int Ligne;
    struct Unite_Lexicale *next;
} UL;

UL *AddToList(UL *head, char *word, int code, int ligne)
{
    if (head == NULL)
    {
        head = (UL *)malloc(sizeof(UL));
        head->next = NULL;
        strcpy(head->Lexeme, word);
        head->Code = code;
        head->Ligne = ligne;
        return head;
    }
    UL *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    UL *New_UL = (UL *)malloc(sizeof(UL));
    strcpy(New_UL->Lexeme, word);
    New_UL->Code = code;
    New_UL->Ligne = ligne;
    New_UL->next = NULL;
    temp->next = New_UL;
    return head;
}

int identifiant(char *mot)
{
    if (!strcmp(mot, "select") || !strcmp(mot, "SELECT"))
    {
        return SELECT_KW;
    }
    else if (!strcmp(mot, "from") || !strcmp(mot, "FROM"))
    {
        return FROM_KW;
    }
    else if (!strcmp(mot, "where") || !strcmp(mot, "WHERE"))
    {
        return WHERE_KW;
    }
    else if (!strcmp(mot, "count") || !strcmp(mot, "COUNT"))
    {
        return COUNT_KW;
    }
    else if (!strcmp(mot, "distinct") || mot == "DISTINCT")
    {
        return DISTINCT_KW;
    }
    else if (!strcmp(mot, "and") || !strcmp(mot, "AND") || !strcmp(mot, "or") || !strcmp(mot, "OR"))
    {
        return OPERATEUR_LOGIQUE;
    }
    else
    {
        return IDENTIFIANT_UL;
    }
}
int separateur(char *mot)
{
    if (!strcmp(mot, "+") || !strcmp(mot, "-") || !strcmp(mot, "*") || !strcmp(mot, "/"))
    {
        return OPERATEUR_ARETHMETIQUE;
    }
    else if (!strcmp(mot, "<") || !strcmp(mot, ">") || !strcmp(mot, "="))
    {
        return OPERATEUR_LOGIQUE;
    }
    else if (!strcmp(mot, "{"))
    {
        return ACCOLADE_OUVRANTE;
    }
    else if (!strcmp(mot, "}"))
    {
        return ACCOLADE_FERMANTE;
    }
    else if (!strcmp(mot, ","))
    {
        return SEPERATEUR_VIRGULE;
    }
    else if (!strcmp(mot, ";"))
    {
        return SEPERATEUR_POINT_VIRGULE;
    }
    else
    {
        return ERREUR;
    }
}
int AEF(UL head)
{
    int i;
    int L = 1;
    char err;
    int valid = 0;
    char Nmot[30] = "";
    int etatAout = Q0;
    int etatFin1 = Q1;
    int etatFin2 = Q2;
    int etatFin3 = Q4;
    int etatFin4 = Q5;
    char ch, file_name[25];
    FILE *fp;

    printf("Enter name of a file you wish to compile\n");
    gets(file_name);
    fp = fopen(file_name, "r");

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        err = ch;
        if (ch == '\n')
        {
            L++;
        }
        switch (etatAout)
        {
        case Q0:
            if (isspace(ch) || ch == '\n' || ch == '/' || ch == '*' || ch == '+' || ch == '-' || ch == '=' || ch == ',' || ch == ';' || ch == '{' || ch == '}')
            {
                err = ch;
                if (!isspace(ch))
                {
                    strncat(Nmot, &ch, 1);
                    head = AddToList(head, Nmot, separateur(Nmot), L);
                    Nmot[0] = '\0';
                }
                etatAout = Q0;
            }
            else if (isalpha(ch))
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q1;
            }
            else if (isdigit(ch))
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q2;
            }
            else if (ch == '.')
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q3;
            }
            else if (ch == '>' || ch == '<')
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q5;
            }
            else
            {
                printf(" Errur Lexicale , carectere %c non Reconnu line %d", err, L);
                return ERREUR;
            }
            break;
        case Q1:
            if (isalnum(ch))
            {
                err = ch;
                etatAout = Q1;
                strncat(Nmot, &ch, 1);
            }
            else if (isspace(ch) || ch == '\n' || ch == '/' || ch == '*' || ch == '+' || ch == '-' || ch == '=' || ch == ',' || ch == ';' || ch == '(' || ch == ')')
            {
                if (ch == ';')
                {
                    valid = 1;
                }
                err = ch;
                head = AddToList(head, Nmot, identifiant(Nmot), L);
                Nmot[0] = '\0';
                if (!isspace(ch))
                {
                    strncat(Nmot, &ch, 1);
                    head = AddToList(head, Nmot, separateur(Nmot), L);
                    Nmot[0] = '\0';
                }

                etatAout = Q0;
            }
            else if (ch == '>' || ch == '<' || ch == '=')
            {
                err = ch;
                head = AddToList(head, Nmot, identifiant(Nmot), L);
                Nmot[0] = '\0';
                strncat(Nmot, &ch, 1);
                head = AddToList(head, Nmot, separateur(Nmot), L);
                Nmot[0] = '\0';
                etatAout = Q5;
            }
            else
            {
                printf(" Errur Lexicale , carectere %c non Reconnu line %d", err, L);
                return ERREUR;
            }
            break;
        case Q2:
            if (isdigit(ch))
            {
                err = ch;
                etatAout = Q2;
                strncat(Nmot, &ch, 1);
            }
            else if (isspace(ch) || ch == '\n' || ch == '/' || ch == '*' || ch == '+' || ch == '-' || ch == '=' || ch == ',' || ch == ';' || ch == '(' || ch == ')')
            {
                err = ch;
                if (ch == ';')
                {
                    valid = 1;
                }
                head = AddToList(head, Nmot, NOMBRE_UL, L);
                Nmot[0] = '\0';
                if (!isspace(ch))
                {
                    strncat(Nmot, &ch, 1);
                    head = AddToList(head, Nmot, separateur(Nmot), L);
                    Nmot[0] = '\0';
                }
                etatAout = Q0;
            }
            else if (ch == '.')
            {
                err = ch;
                etatAout = Q3;
                strncat(Nmot, &ch, 1);
            }
            else if (ch == '>' || ch == '<')
            {
                err = ch;
                head = AddToList(head, Nmot, NOMBRE_UL, L);
                Nmot[0] = '\0';
                strncat(Nmot, &ch, 1);
                head = AddToList(head, Nmot, separateur(Nmot), L);
                Nmot[0] = '\0';
                etatAout = Q5;
            }
            else
            {
                printf(" Errur Lexicale , carectere %c non Reconnu line %d", err, L);
                return ERREUR;
            }

            break;
        case Q3:
            if (isdigit(ch))
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q4;
            }
            else
            {
                printf(" Errur Lexicale , carectere %c non Reconnu line %d", err, L);
                return ERREUR;
            }
            break;
        case Q4:
            if (isdigit(ch))
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q4;
            }
            else if (isspace(ch) || ch == '\n' || ch == '/' || ch == '*' || ch == '+' || ch == '-' || ch == '=' || ch == ',' || ch == ';' || ch == '(' || ch == ')')
            {
                if (ch == ';')
                {
                    valid = 1;
                }
                err = ch;
                head = AddToList(head, Nmot, NOMBRE_UL, L);
                Nmot[0] = '\0';
                if (!isspace(ch))
                {
                    strncat(Nmot, &ch, 1);
                    head = AddToList(head, Nmot, separateur(Nmot), L);
                    Nmot[0] = '\0';
                }
                etatAout = Q0;
            }
            else if (ch == '>' || ch == '<')
            {

                err = ch;
                head = AddToList(head, Nmot, NOMBRE_UL, L);
                Nmot[0] = '\0';
                strncat(Nmot, &ch, 1);
                head = AddToList(head, Nmot, separateur(Nmot), L);
                Nmot[0] = '\0';
                etatAout = Q5;
            }
            else
            {
                printf(" Errur Lexicale , carectere %c non Reconnu line %d", err, L);
                return ERREUR;
            }
            break;
        case Q5:
            if (isspace(ch) || ch == '\n' || ch == '/' || ch == '*' || ch == '+' || ch == '-' || ch == '=' || ch == ',' || ch == ';' || ch == '(' || ch == ')')
            {
                if (ch == ';')
                {
                    valid = 1;
                }
                err = ch;
                head = AddToList(head, Nmot, NOMBRE_UL, L);
                Nmot[0] = '\0';
                if (!isspace(ch))
                {
                    strncat(Nmot, &ch, 1);
                    head = AddToList(head, Nmot, separateur(Nmot), L);
                    Nmot[0] = '\0';
                }
                etatAout = Q0;
            }
            else if (isalpha(ch))
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                head = AddToList(head, Nmot, identifiant(Nmot), L);
                Nmot[0] = '\0';
                etatAout = Q1;
            }
            else if (isdigit(ch))
            {
                err = ch;
                strncat(Nmot, &ch, 1);
                etatAout = Q2;
            }
            else
            {
                printf(" Errur Lexicale , carectere %c non Reconnu line %d", err, L);
                return ERREUR;
            }
        }
    }
    head = AddToList(head, "#", fin, L);
    fclose(fp);
    if (etatAout == etatFin1 || etatAout == etatFin2 || etatAout == etatFin3 || etatAout == etatFin4 || valid)
    {
        return head;
    }
    else
    {
        printf("error!!");
    }
}

void afficher_liste(UL *liste)
{
    UL *tmp = liste;
    printf("****************************** Afichage de la suites des UL ****************************\n", tmp->Code);
    while (tmp != NULL)
    {
        printf("-------------------> Lexeme = [%s]   Code = [%d]  Ligne = [%d]\n", tmp->Lexeme, tmp->Code, tmp->Ligne);
        tmp = tmp->next;
    }
}

int main()
{
    UL* head = NULL;
    head = AEF(head);
    afficher_liste(head);
    return 0;
}
