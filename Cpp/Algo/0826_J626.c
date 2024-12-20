#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL || out == NULL) {
        printf("Error");
        return 1;
    }

    int a, b;
    fscanf(in, "%d %d", &a, &b);
    int max = a;
    int min = b;
    if(a < b) {
        max = b;
        min = a;
    }

    int result = 0;
    for(int i=min; i<=max; i++) {
        result += i;
    }
    
    fprintf(out, "%d", result);
    fclose(in);
    fclose(out);
}