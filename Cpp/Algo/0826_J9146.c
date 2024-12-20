#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error");
        return 1;
    }

    char name[21];
    int a, b;

    fscanf(in, "%s %d %d", name, &a, &b);
    int sum = 0;
    double avg = 0;

    sum = a + b;
    avg = sum / 2.0;

    fprintf(out, "%s %d %.1lf", name, sum, avg);
    fclose(in);
    fclose(out);
}