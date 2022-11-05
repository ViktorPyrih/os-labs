#include "stdio.h"
#include "unistd.h"

int main() {
    int pid = fork();
    if (pid == 0) {
        printf("child %d\n", getpid());
        sleep(10);
    } else {
        printf("parent %d\n", getpid());
        sleep(10);
    }
    return 0;
}
