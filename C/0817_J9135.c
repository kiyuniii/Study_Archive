#include <stdio.h>

typedef struct {
    int id;
    int money;
} Person;

int getMax(int *array, int size, int *id) {
    int max = array[0];
    for(int i=1; i<size; i++) {
        if(max < array[i]) {
            max = array[i];
            *id = i+1;
        }
    }
    return max;
}

int main() {
    Person person[5];
    int moneyArray[5];
    /* 구조체의 멤버변수로 배열을 받지 말고 별도의 배열 선언 후 따로 추가 */
    for(int i=0; i<5; i++) {
        printf("%d번 저축금액은? ", i+1);
        scanf("%d", &moneyArray[i]);
    }

    for(int i=0; i<5; i++) 
        person[i].money = moneyArray[i];
        
    int id = 0;
    /* 안 그러면 여기서 골치아파짐 (Person *) != (int *) */
    int result = getMax(moneyArray, 5, &id);
    printf("저축왕 %d번 %d원", id, result);
}