#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL || out == NULL) {
        printf("ERROR");
        return 1;
    }

    double array[10] = {0};
    for(int i=0; i<10; i++) {
        fscanf(in, "%lf", &array[i]);
    }

    double avg;
    avg =  (array[0]+array[9])/2.0;

    fprintf(out, "%.1lf", avg);
    fclose(in);
    fclose(out);
}
