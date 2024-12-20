#include <stdio.h>

int pow(int n) {
    if(n == 0)
        return 1;
    return 2*pow(n-1);
}

int main() {
    int num=0;
    scanf("%d", &num);

    printf("%d", pow(num));
}