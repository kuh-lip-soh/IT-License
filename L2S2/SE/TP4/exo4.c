#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
//Fonctions correspondant au corps d’un thread(tache)
void *etoile();
void *diese();
void *arobase();
sem_t s1, s2, s3;

//Remarque:le prototype d’une tâche doit être :
//void *(*start_routine)(void *)
int main(void)
{
    sem_init(&s1, 0, 0);
    sem_init(&s2, 0, 0);
    sem_init(&s3, 0, 3);
    pthread_t thrEtoile, thrDiese, thrarobase;
    //les ID des de 3 thread
    setbuf(stdout, NULL);
    //pas de tampon sur stdout
    printf("Je vais créer et lancer 3 threads\n");
    pthread_create(&thrEtoile, NULL, etoile, NULL);
    pthread_create(&thrDiese, NULL, diese, NULL);
    pthread_create(&thrarobase, NULL, arobase, NULL);
    //printf("J’attends la fin des 3 threads\n");
    pthread_join(thrEtoile, NULL);
    pthread_join(thrDiese, NULL);
    pthread_join(thrarobase, NULL);
    printf("\nLes 3 threads se sont termines\n");
    printf("Fin du thread principal\n");
    pthread_exit(NULL);
    return EXIT_SUCCESS;
}
void *etoile()
{
    int i;
    char c1 = '*';
    for (i = 1; i <= 200; i++)
    {
        sem_wait(&s3);
        write(1, &c1, 1);
        sem_post(&s1);
        // écrit un caractère sur stdout(descripteur 1)
    }
    return NULL;
}
void *diese()
{
    int i;
    char c1 = '#';
    for (i = 1; i <= 200; i++)
    {
        sem_wait(&s1);
        write(1, &c1, 1);
        sem_post(&s2);
    }
    return NULL;
}
void *arobase()
{
    int i;
    char c1 = '@';
    for (i = 1; i <= 200; i++)
    {
        sem_wait(&s2);
        write(1, &c1, 1);
        sem_post(&s3);
    }
    return NULL;
}
