#include <stdio.h>

void odd(int* arr, int len) {
    for(int i=0; i<len; i++) {
        if(arr[i]%2 == 1)
            printf("%d ", arr[i]);
    }
}

void even(int* arr, int len) {
    for(int i=0; i<len; i++) {
        if(arr[i]%2 == 0)
            printf("%d ", arr[i]);
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("홀수: "); 
    odd(array, sizeof(array)/sizeof(int));
    printf("\n짝수: ");
    even(array, sizeof(array)/sizeof(int));

    return 0;
}