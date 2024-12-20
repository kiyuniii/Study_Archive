#include <stdio.h>
#include <string.h>

/* 구조체 정렬 */
typedef struct {
    char name[21];
    int height;
    double weight;
} Student;

/* 구조체 단위 swap */
void swap(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    Student student[5];

    for(int i=0; i<5; i++) 
        scanf("%s%d%lf", student[i].name, &student[i].height, &student[i].weight);
    
    /* Selection Sort - name */
    for(int i=0; i<5; i++) {
        int index = i;
        for(int j=i+1; j<5; j++) {
            /* strcmp: 같다(0), 앞이작다(음), 앞이크다(양) */
            if(strcmp(student[j].name, student[index].name) < 0)
                index = j;
        }
        swap(&student[i], &student[index]);
    }    

    printf("name\n");
    for(int i=0; i<5; i++) 
        printf("%s %d %.1lf\n", student[i].name, student[i].height, student[i].weight);
    printf("\n");
    
    /* Selection Sort - weight */
    for(int i=0; i<5; i++) {
        int index = i;
        for(int j=i+1; j<5; j++) {
            if(student[j].weight > student[index].weight)
                index = j;
        }
        swap(&student[i], &student[index]);
    }

    printf("weight\n");
    for(int i=0; i<5; i++)
        printf("%s %d %.1lf\n", student[i].name, student[i].height, student[i].weight);
    

}