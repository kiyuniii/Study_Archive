#include <stdio.h>

void roll_dice(int N, int M) {
    static int path[10];  // 주사위를 최대 10번 던질 수 있으므로 길이는 10으로 설정
    static int depth = 0; // 현재 깊이(던진 횟수)

    if (N == 0) {  // 종료 조건: 남은 던짐 횟수가 0일 때
        if (M == 0) {  // M이 0이면 원하는 합을 달성한 것
            for (int i = 0; i < depth; i++) {
                printf("%d ", path[i]);
            }
            printf("\n");
        }
        return;
    }

    for (int i = 1; i <= 6; i++) {  // 주사위의 눈은 1부터 6까지 가능
        path[depth] = i;  // 현재 깊이에 눈의 값을 저장
        depth++;  // 깊이를 증가
        roll_dice(N - 1, M - i);  // 재귀 호출, N은 감소하고 M은 눈의 값을 빼줌
        depth--;  // 재귀 호출에서 돌아오면 깊이를 감소
    }
}

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    roll_dice(N, M);  // 함수 호출

    return 0;
}
