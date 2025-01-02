#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    // 새로운 프로세스를 생성
    pid = fork();

    if (pid > 0) {
        // 부모 프로세스 영역
        printf("Parent process: pid of child is %d\n", pid);
        printf("Parent process: pid is %d\n", getpid());
    } else if (pid == 0) {
        // 자식 프로세스 영역
        printf("Child process: pid is %d\n", getpid());
        printf("Child process: pid of parent is %d\n", getppid());
    } else {
        // fork 실패
        perror("fork failed");
        return 1;
    }

    return 0;
}

