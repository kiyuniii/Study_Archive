#include <stdio.h>

void point_ary(int *pa);

int main(void) {
    int array[5] = {1,2,3,4,5};

    point_ary(array);

    return 0;
}

void point_ary(int *pa) {
    for(int i=0; i<5; i++) {
        printf("%d ", pa[i]);
    }
}