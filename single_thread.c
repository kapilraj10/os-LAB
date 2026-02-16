#include <stdio.h>
#include <pthread.h>

/* Thread function */
void *print_message(void *args)
{
    printf("This is a single thread process.\n");
    printf("Only main thread is running.\n");
    return NULL;
}

int main()
{
    pthread_t t1;

    /* Create thread */
    pthread_create(&t1, NULL, print_message, NULL);

    /* Wait for thread to finish */
    pthread_join(t1, NULL);

    return 0;
}
