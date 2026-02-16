#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int a = 10, b = 5;

void* sum(void* arg)
{
    sleep(2);
    int s = a + b;
    printf("Sum = %d\n", s);
    return NULL;
}

void* difference(void* arg)
{
    sleep(4);
    int d = a - b;
    printf("Difference = %d\n", d);
    return NULL;
}

int main()
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, sum, NULL);
    pthread_create(&t2, NULL, difference, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

   return 0;
}
