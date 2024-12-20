#include <stdio.h>
#include <stdlib.h>

int main() {
    int dec;
    scanf("%d", &dec);

    int max = 0;
    int temp = dec;
    while(temp>0) {
        temp /= 2;
        max++;
    }

    int* array = (int*)calloc(max, sizeof(int));
    if(array == NULL) return 1;

    for(int i=0; i<max; i++) {
        array[i] = dec % 2;
        dec /= 2;
    }

    for(int i = max-1; i >= 0; i--) 
        printf("%d", array[i]);

    free(array);
}

/* 10진수 -> 2진수 */