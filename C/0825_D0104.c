#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    for(int i=1; i<100; i++) {
        for(int j=1; j<100; j++) {
            for(int k=1; k<100; k++) {
                if(i*500 + j*700 + k*400 == money) {
                    printf("크림빵: %d, 새우깡: %d, 콜라: %d", i, j, k);
                    printf("\n");
                }
            }
        }
    } 

}
/* 
크림빵 : 500
새우깡 : 700
콜라 : 400 */