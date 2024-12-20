#include <stdio.h>

struct profile {
    int age;
    double height;
};

struct student {
    struct profile pf;
    int id;
    double grade;
};

int main(void) {
    struct student yuni;

    yuni.pf.age = 20;
    yuni.pf.height = 160.2;
    yuni.id = 312;
    yuni.grade = 92.3;

    printf("age: %d\n", yuni.pf.age);
    printf("height %.1lf\n", yuni.pf.height);
    printf("id : %d\n", yuni.id);
    printf("grade: %.1lf\n", yuni.grade);

    return 0;
}