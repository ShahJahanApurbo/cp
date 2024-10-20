#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

void *myThread(void *arg) {
    int thread_num = *(int *)arg;
    printf("Thread %d started\n", thread_num);
    pthread_exit(arg);
}

#define MAX_THREADS 5

int main() {
    int ret, i;
    int thread_args[MAX_THREADS];
    void *status;
    pthread_t threadIds[MAX_THREADS];

    for (i = 0; i < MAX_THREADS; i++) {
        thread_args[i] = i; // Save thread argument
        ret = pthread_create(&threadIds[i], NULL, myThread, (void *)&thread_args[i]);
        if (ret != 0) {
            printf("Error creating thread %d\n", i);
        }
    }

    for (i = 0; i < MAX_THREADS; i++) {
        ret = pthread_join(threadIds[i], &status);
        if (ret != 0) {
            printf("Error joining thread %d\n", i);
        } else {
            printf("Status = %d\n", *(int *)status);
        }
    }

    return 0;
}
