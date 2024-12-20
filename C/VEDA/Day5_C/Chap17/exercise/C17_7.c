#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main(void)  {
    struct address list[5] = {
        {"가나다", 23, "222-1321", "서울시 노원구"}, 
        {"가나다", 23, "222-1321", "서울시 도봉구"}, 
        {"가나다", 23, "222-1321", "서울시 강북구"}, 
        {"가나다", 23, "222-1321", "서울시 성북구"}, 
        {"가나다", 23, "222-1321", "서울시 중랑구"}, 
    };

    for(int i=0; i<5; i++) {
        printf("%10s%3d%15s%15s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    }

    return 0;
}