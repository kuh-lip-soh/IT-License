#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex;
pthread_cond_t h1;
pthread_cond_t h2;
pthread_cond_t f1;
pthread_cond_t f2;

void *H1(void *arg)
{
    sleep(2);
    pthread_mutex_lock(&mutex);
    printf("Entrer Homme 1\n");
    printf("Sortie Homme 1\n");
    pthread_cond_signal(&f1);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

void *H2(void *arg)
{
    pthread_mutex_lock(&mutex);
    pthread_cond_wait(&h2, &mutex);
    printf("Entrer Homme 2\n");
    printf("Sortie Homme 2\n");
    pthread_cond_signal(&f2);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

void *F1(void *arg)
{
    pthread_mutex_lock(&mutex);
    pthread_cond_wait(&f1, &mutex);
    printf("Entrer Femme 1\n");
    printf("Sortie Femme 1\n");
    pthread_cond_signal(&h2);
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

void *F2(void *arg)
{
    pthread_mutex_lock(&mutex);
    pthread_cond_wait(&f2, &mutex);
    printf("Entrer Femme 2\n");
    printf("Sortie Femme 2\n");
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

int main()
{
    pthread_t th1, th2, tf1, tf2;
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&h1, NULL);
    pthread_cond_init(&h2, NULL);
    pthread_cond_init(&f1, NULL);
    pthread_cond_init(&f2, NULL);
    pthread_create(&th1, NULL, H1, NULL);
    pthread_create(&th2, NULL, H2, NULL);
    pthread_create(&tf1, NULL, F1, NULL);
    pthread_create(&tf2, NULL, F2, NULL);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    pthread_join(tf1, NULL);
    pthread_join(tf2, NULL);
    exit(0);
}