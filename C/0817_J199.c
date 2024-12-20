#include <stdio.h>

/* sum을 구조체 밖에 따로 배열 만들어서 하면 안됨 */
typedef struct {
    char name[21];
    int a;
    int b;
    int c;
    int sum;
} Person;

/* sum도 같이 swap 되어야 함 */
void swap(Person *x, Person *y) {
    Person temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n;
    scanf("%d", &n);

    Person person[n];
    for(int i=0; i<n; i++) {
        scanf("%s%d%d%d", person[i].name, &person[i].a, &person[i].b, &person[i].c);
        person[i].sum = person[i].a + person[i].b + person[i].c;
    }
     
    /* selection Sort */
    for(int i=0; i<n; i++) {
        int index = i;
        for(int j=i+1; j<n; j++) 
            if(person[j].sum > person[index].sum)
                index = j;
        swap(&person[i], &person[index]);
    }

    for(int i=0; i<n; i++) {
        printf("%s %d %d %d %d\n", person[i].name, person[i].a, person[i].b, person[i].c, person[i].sum);
    }

}