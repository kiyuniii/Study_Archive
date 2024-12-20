#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int max = 0;
    for(int k=0; pow(2, k)<=n; k++) {
        max = k;
    }

    printf("%d", max);
}