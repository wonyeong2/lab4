#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *hello_thread(void *arg)
{
    printf("Thread: Hello, World!\n");
    return arg;
}

int main()
{
    pthread_t tid; // 쓰레드 id 저장
    int status;

    /* 쓰레드 생성 */
    status = pthread_create(&tid, NULL, hello_thread, NULL);
    if(status !=0)
        perror("Create thread");

    // main 함수를 수행하는 초기 쓰레드만 종료
    pthread_exit(NULL);
    return 0;
}
