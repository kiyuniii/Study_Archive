#include <stdio.h>

int main() {
    int insec;
    scanf("%d", &insec);

    int hour = insec/3600;
    int min = (insec- hour*3600)/60;
    int sec = insec - hour*3600 - min*60;
    printf("h:%d, m:%d, s:%d", hour , min, sec);
}

/* 시, 분, 초 */