#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s1, s2;

void *T1(void *arg)
{
    printf("S");
    sem_post(&s1);
    sem_wait(&s2);
    printf("S");
    sem_post(&s1);
    sem_wait(&s2);
    printf("E");
    sem_post(&s1);
    sem_wait(&s2);
    printf("E\n");
    sem_post(&s1);
    pthread_exit(NULL);
}
void *T2(void *arg)
{
    sem_wait(&s1);
    printf("Y");
    sem_post(&s2);
    sem_wait(&s1);
    printf("T");
    sem_post(&s2);
    sem_wait(&s1);
    printf("M");
    sem_post(&s2);
    pthread_exit(NULL);
}
int main()
{
    sem_init(&s1, 0, 0);
    sem_init(&s2, 0, 0);
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, T1, NULL);
    pthread_create(&tid2, NULL, T2, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    exit(0);
}