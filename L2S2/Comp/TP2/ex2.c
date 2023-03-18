#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct wordFromSentence
{
    char myWord[20];
    struct wordFromSentence *nextWordAdress;
} word;
}

word *insertEnd(word *w, char c[])
{
    if (w == NULL)
    {
        w = malloc(sizeof(word));
        w->nextWordAdress = NULL;
        strcpy(w->myWord, c);
        return w;
    }
    word *lastWord = w;
    while (lastWord->nextWordAdress != NULL)
    {
        lastWord = lastWord->nextWordAdress;
    }
    lastWord->nextWordAdress = malloc(sizeof(word));
    strcpy(lastWord->nextWordAdress->myWord, c);
    lastWord->nextWordAdress->nextWordAdress = NULL;
    return w;
}

word *insertBeginning(word *w, char c[])
{
    word *firstWord = malloc(sizeof(word));
    strcpy(firstWord->myWord, c);
    fisrtWord->nextWordAdress = w;
    return firstWord;
}
