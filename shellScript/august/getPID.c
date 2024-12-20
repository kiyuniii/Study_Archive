#include <stdio.h>
#include <unistd.h>

int main() {
	printf("Hello!\n");
	printf("my PID: [%d]\n", getpid());
	printf("my PPID: [%d]\n", getppid());
	system("ps");
}
