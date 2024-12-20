/* 구조체 초기화 방법 */
#include <stdio.h>

typedef struct {
    char name[100];
    int age;
} Person;

int main() {
    Person myfriend;
    
    Person me = {"손예준", 12}; //구조체 초기화 방법

    printf("친한 친구의 이름과 나이를 입력하세요. ");
    scanf("%s%d", myfriend.name, &myfriend.age);

    printf("당신의 이름 : %s, 나이 : %d\n", me.name, me.age);
    printf("친구의 이름 : %s, 나이 : %d", myfriend.name, myfriend.age);

}