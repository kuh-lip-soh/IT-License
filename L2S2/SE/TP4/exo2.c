#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s1, s2, s3;

void *T1()
{
    sem_wait(&s3);
    printf("2");
    printf("0");
    printf("2");
    printf("1\n");
    sem_post(&s1);
    pthread_exit(NULL);
}
void *T2()
{
    sem_wait(&s1);
    printf("S");
    printf("Y");
    printf("S");
    sem_post(&s2);
    pthread_exit(NULL);
}
void *T3()
{
    sem_wait(&s2);
    printf("T");
    printf("E");
    printf("M");
    printf("E\n");
    sem_post(&s3);
    pthread_exit(NULL);
}

int main()
{
    sem_init(&s1, 0, 1);
    sem_init(&s2, 0, 0);
    sem_init(&s3, 0, 0);
    pthread_t tid1, tid2, tid3;
    pthread_create(&tid3, NULL, T3, NULL);
    pthread_create(&tid1, NULL, T1, NULL);
    pthread_create(&tid2, NULL, T2, NULL);
    pthread_join(tid3, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    
    exit(0);
}