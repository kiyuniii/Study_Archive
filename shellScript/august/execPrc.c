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
        printf("Child process before exec: pid is %d\n", getpid());
        
        // 자식 프로세스를 /bin/ls 프로그램으로 교체
        execl("/bin/ls", "ls", NULL);
        
        // execl()이 성공적으로 호출되면 이 아래의 코드는 실행되지 않음
        printf("This line will not be printed if exec is successful.\n");
    } else {
        // fork 실패
        perror("fork failed");
        return 1;
    }

    return 0;
}

