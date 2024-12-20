#include <stdio.h>

struct vision {
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(void) {
    struct vision robot;

    printf("시력입력: ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    
    robot = exchange(robot);
    printf("left': %.1lf\n", robot.left);
    printf("right': %.1lf\n", robot.right);

    return 0;
}

struct vision exchange(struct vision robot){
    double temp;
    
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}