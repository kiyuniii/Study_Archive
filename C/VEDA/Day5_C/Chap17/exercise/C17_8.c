#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp);

int main(void)  {
    struct address list[5] = {
        {"가나다", 23, "222-1321", "서울시 노원구"}, 
        {"가나다", 23, "222-1321", "서울시 도봉구"}, 
        {"가나다", 23, "222-1321", "서울시 강북구"}, 
        {"가나다", 23, "222-1321", "서울시 성북구"}, 
        {"가나다", 23, "222-1321", "서울시 중랑구"}, 
    };

    print_list(list);

    return 0;
}

void print_list(struct address *lp) {
    int i;

    for(i=0; i<5; i++) {
        printf("%10s%3d%15s%15s\n", (lp+i)->name, (lp+i)->age, (lp+i)->tel, (lp+i)->addr);
    }
}