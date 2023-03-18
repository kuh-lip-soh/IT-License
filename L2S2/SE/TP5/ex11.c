#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t mutex;
pthread_cond_t c1;
pthread_cond_t c2;
pthread_cond_t c3;

void *T1(void *arg)
{
    sleep(2);
    pthread_mutex_lock(&mutex);
    printf("TE");
    pthread_cond_signal(&c1);
    pthread_cond_wait(&c3, &mutex);
    printf(" T");
    pthread_cond_signal(&c1);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}
void *T2(void *arg)
{
    pthread_mutex_lock(&mutex);
    pthread_cond_wait(&c1, &mutex);
    printf("S");
    pthread_cond_signal(&c2);
    pthread_cond_wait(&c1, &mutex);
    printf("P");
    pthread_cond_signal(&c2);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}
void *T3(void *arg)
{
    pthread_mutex_lock(&mutex);
    pthread_cond_wait(&c2, &mutex);
    printf("T");
    pthread_cond_signal(&c3);
    pthread_cond_wait(&c2, &mutex);
    printf(" N°2\n");
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}
int main()
{
    pthread_t th1, th2, th3;
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&c1, NULL);
    pthread_cond_init(&c2, NULL);
    pthread_cond_init(&c3, NULL);
    pthread_create(&th1, NULL, T1, NULL);
    pthread_create(&th2, NULL, T2, NULL);
    pthread_create(&th3, NULL, T3, NULL);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    pthread_join(th3, NULL);

    exit(0);
}