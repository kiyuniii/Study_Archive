#include <stdio.h>

typedef struct {
    char name[21];
    int score;
} Person;


int main() {
    FILE *in = ("input.txt", "r");
    FILE *out = ("output.txt", "w");

    if(in == NULL || out == NULL) return 1;

    Person array[10];
    for(int i=0; i<10; i++) 
        fscanf(in, "%s %d", array[i].name, &array[i].score);
    
    
    for(int i=0; i<10; i++) {   
        fprintf("%4s %5d %4d", array[i].name, array[i].score,)
    }
}