#include <stdio.h>

int main() {
    int a=0, b=0;
    scanf("%d%d", &a, &b);

    int c = ++a + b--;
    
    printf("a = %d, b = %d, c = %d", a, b, c);
}