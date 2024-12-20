//생성자(constructor)의 3가지 방식
#include <iostream>
using namespace std;

class rectangle {
public:
    int width, height;
    rectangle();
    rectangle(int w, int h);
    rectangle(int length);
    bool isSquare();
};

//1. 매개변수를 받지않는 생성자
rectangle::rectangle(){
    width = height = 1;
}

//2. 매개변수를 2개 받는 생성자
rectangle::rectangle(int w, int h){
    width = w;
    height = h;
}

//3. 매개변수를 1개 받는 생성자
rectangle::rectangle(int length){
    width = height = length;
}

//#. 정사각형 판별 멤버함수
bool rectangle::isSquare() {
    if(width == height)
        return true;
    else
        return false;
}

int main() {
    rectangle rect1;
    rectangle rect2(3,5);
    rectangle rect3(3);

    if(rect1.isSquare()) cout << "rectangle1" << endl;
    if(rect2.isSquare()) cout << "rectangle2" << endl;
    if(rect3.isSquare()) cout << "rectangle3" << endl;

    return 0;
}