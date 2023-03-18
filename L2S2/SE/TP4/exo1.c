#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s;
int a = 0;
void *increment(void *arg);
void *decrement(void *arg);

int main()
{
    pthread_t threadA;
    pthread_t threadB;
    printf("programme principale : a = %d\n", a);
    pthread_create(&threadA, NULL, increment, NULL);
    pthread_create(&threadB, NULL, decrement, NULL);
    pthread_join(threadA, NULL);
    pthread_join(threadB, NULL);
    printf("programme principale, fin threads : a =%d\n", a);
    return 0;
}

void *decrement(void *arg)
{

    a = a - 1;
    printf("thread B decrement : a=%d\n", a);

    return (NULL);
}
void *increment(void *arg)
{
    a = a + 1;
    printf("thread A increment : a = %d\n", a);

    return (NULL);
}