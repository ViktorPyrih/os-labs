#include "sys/wait.h"
#include "stdio.h"
#include "unistd.h"

int main(int argc, char *argv[]) {
    int pid = fork();
    if (pid == 0) {
        printf("child %d\n", getpid());
        char *argv[3] = {"echo", "Hey!", NULL};
        execvp("echo", argv);
    } else {
        printf("parent %d\n", getpid());
    }
    return 0;
}
