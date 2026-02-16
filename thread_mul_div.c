#include <stdio.h>
#include <pthread.h>

int a = 20, b = 4;

void* multiplication(void* arg)
{
    int m = a * b;
    printf("Multiplication = %d\n", m);
    return NULL;
}

void* division(void* arg)
{
    int d = a / b;
    printf("Division = %d\n", d);
    return NULL;
}

int main()
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, multiplication, NULL);
    pthread_create(&t2, NULL, division, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}
