#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
int main()
{
    /** Declaration variable de type FILE **/
    FILE *file1, *file2;
    char chaine[100] = {0};
    char chaine1[100] = {0};
    char chaine2[100] = {0};
    char c;
    char ligne[100] = {0};

    /** 1- Ecriture dans un ficher  **/
    /** Créer et Ouvrir un nouveau fichier Fichier1.txt en mode Ecriture (w)**/
    file1 = fopen("Fichier1.txt", "w");

    if (file1 == NULL)
    {
        printf("Erreur");
        return 0;
    }

    printf("Entrer une chaine: ");

    /** Lire la chaine à partir de l'écran **/
    fgets(chaine, 100, stdin);

    /** Ecrire la chaine saisie dans le fichier Fichier1.txt **/
    fprintf(file1, "%s", chaine);

    /** Afficher la chaine saisie sur l'écran aussi **/
    fprintf(stdout, "%s", chaine);

    /** Fermer le Fichier Fichier1.txt **/
    fclose(file1);

    /** 2- Ecriture sur un fichier à partir d'un fichier caractere par caractere **/
    /** Ouvrir le Fichier existant Fichier1.txt en mode Lecture (r) **/
    file1 = fopen("Fichier1.txt", "r");

    /** Créer et Ouvrir un nouveau fichier Fichier2.txt en mode Ecriture (w)**/
    file2 = fopen("Fichier2.txt", "w");

    if ((file1 == NULL) || (file2 == NULL))
    {
        printf("Erreur d'Ouverture Fichier");
        return 0;
    }

    printf("\nEcriture Caract�re par caract�re de Fichier1 vers Fichier2 \n");

    /** Copier le contenu de Fichier1.txt vers Fichier2.txt caractére par caractére  **/
    while ((c = fgetc(file1)) != EOF)
        fputc(c, file2);

    /** Fermer les  Fichiers :  Fichier1.txt et Fichier2.txt **/
    fclose(file1);
    fclose(file2);

    /** 3-A Ecriture sur un fichier à partir d'un fichier Ligne par Ligne   **/
    /** Ouvrir le Fichier existant Texte.txt en mode Lecture (r) **/
    file1 = fopen("Texte.txt", "r");

    /** Créer et Ouvrir un nouveau fichier Texte2.txt en mode Ecriture (w)**/
    file2 = fopen("Texte2.txt", "w");

    if ((file1 == NULL) || (file2 == NULL))
    {
        printf("Erreur d'Ouverture Fichier");
        return 0;
    }

    printf("\nEcriture sur Fichier Ligne par Ligne fputs\n");

    /** Copier le contenu de Texte1.txt vers Texte2.txt Ligne par Ligne  **/
    while (fgets(ligne, 50, file1) != NULL)
        fputs(ligne, file2);

    /** Fermer les  Fichiers :  Texte1.txt et Texte2.txt **/
    fclose(file1);
    fclose(file2);

    /** 3-B Ecriture sur un fichier à partir d'un fichier Ligne par Ligne   **/
    /** Ouvrir le Fichier existant Texte.txt en mode Lecture (r) **/
    file1 = fopen("Texte.txt", "r");

    /** Créer et Ouvrir un nouveau fichier Texte3.txt en mode Ecriture (w)**/
    file2 = fopen("Texte3.txt", "w");

    if ((file1 == NULL) || (file2 == NULL))
    {
        printf("Erreur d'Ouverture Fichier");
        return 0;
    }
    printf("\nEcriture sur Fichier Ligne par Ligne fprintf\n");

    /** Copier le contenu de Texte1.txt vers Texte3.txt Ligne par Ligne  **/
    while (fgets(ligne, 50, file1) != NULL)
        fprintf(file2, "%s", ligne);

    /** Fermer les  Fichiers :  Texte1.txt et Texte3.txt **/
    fclose(file1);
    fclose(file2);

    /** 4- Lecture d'un fichier Ligne par Ligne et Affichage sur Ecran **/
    /** Ouvrir le Fichier existant Texte.txt en mode Lecture (r) **/
    file1 = fopen("Texte.txt", "r");

    if (file1 == NULL)
    {
        printf("Erreur");
        return 0;
    }

    printf("\nLecture Ligne par Ligne et Affichage sur Ecran \n");

    /** Copier le contenu de chaque ligne du fichier Texte.txt dans la variable ligne (50 caractéres Max)   **/
    while (fgets(ligne, 50, file1) != NULL)
    {
        /**  Affichage sur Ecran d'une seul ligne: 3 méthodes **/
        puts(ligne);
        /** ou bien **/
        //fprintf(stdout,"%s",ligne);
        /** ou bien **/
        //printf("%s",ligne);
    }

    /** Fermer le Fchier Texte.txt**/
    fclose(file1);

    /** 5- Lecture d'un fichier Carectere par Caractere et Affichage sur Ecran **/
    /** Ouvrir le Fichier existant Texte.txt en mode Lecture (r) **/
    file1 = fopen("Texte.txt", "r");

    if (file1 == NULL)
    {
        printf("Erreur");
        return 0;
    }

    printf("\nLecture Caractere par Caractere et Affichage sur Ecran \n");

    /** Copier chaque caractére du fichier Texte.txt dans la variable c **/
    while ((c = fgetc(file1)) != EOF)
    {
        /**Affichage sur Ecran caracére par caractére: 4 méthodes **/
        putc(c, stdout);
        /** ou bien **/
        //putchar(c);
        /** ou bien **/
        //fprintf(stdout,"%c",c);
        /** ou bien **/
        //printf("%c",c);
    }

    /** Fermer le Fchier Texte.txt**/
    fclose(file1);
}
