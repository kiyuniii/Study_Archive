#include <stdio.h>

int main() {
    /* int array[10];
    for(int i=0; i<10; i++)
        scanf("%d", &array[i]); */
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int sort[10];
    int j=0, k=9;
    for(int i=0; i<10; i++) {
        if(array[i]%2 == 1) {
            sort[j] = array[i];
            j++;
        }
        else {
            sort[k] = array[i];
            k--;
        }
    }

    for(int i=0; i<10; i++) 
        printf("%d ", sort[i]);
}