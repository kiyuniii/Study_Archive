#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*  iterator가 포인터로써 원본 값을 가리키는건데 
    포인터를 매개변수로 받기 위해선 주소참조연산자(&)로 받아야하는거잖아
    함수 내에서 전달된 변수의 '원본 값'을 수정하기 위함 */

void doubleElement(int &value) {    // `&` 없으면 함수(doubleElement) 종료되고 원상복구(1, 5, 2, 4, 3)
    //컨테이너의 실제 값을 바꿔야 하므로 &을 붙임
    value *= 2;         
}
void countElement(int &count, int target, int value) {
    //컨테이너의 실제 값을 바꾸는건 아니므로 &를 안 붙임
    if(value == target)
        count++;
}
void sumElement(int &sum, int value) {
    //컨테이너의 실제 값을 바꾸진 않고 해당 값을 보기만하므로 & 안 붙임
    //하지만 sumElement함수의 외부 변수(sum)의 값은 실제로 바꿔야 하므로 &을 붙임
    sum += value;
}
void printIfEven(int n) {
    if(n%2 == 0)
        cout << n << " ";
}
struct Person {     //class로 해보기
    string name;
    int age;
};
void printPerson(const Person &p) {
    cout << p.name << " is " << p.age << " years old." << endl;
}   


int main() {
    vector<int> vec = {1, 5, 2, 4, 3};
    vector<int> vec2(5);

    copy(vec.begin(), vec.end(), vec2.begin());
    for(int i : vec2)
        cout << i << " ";
    cout << "/* 컨테이너의 모든 요소 출력 */" << endl;
    cout << endl << endl;

    /* 각 요소를 두 배로 출력 */    
    for_each(vec.begin(), vec.end(), doubleElement); //for_each 내부의 iterator로 각 요소에 doubleElement함수 적용
        /*  람다 함수
            : [캡쳐리스트](매개변수)->반환형 { 함수 본문 } */
    cout << "/* 각 요소를 두 배로 출력 */" << endl;
    for_each(vec.begin(), vec.end(), [](int n){ cout << n << " "; });
    cout << endl << endl;

    /* 특정 요소를 카운트 */
    int target = 2, count = 0;
    /*  `n`: 실제 벡터의 각 요소에 해당하는 값 
        `[&]`: 참조에 의한 캡쳐, 따라서 `count`를 변경하면 원본이 바뀜*/
    for_each(vec.begin(), vec.end(), [&](int n) {
        countElement(count, target, n); });
    cout << "/* 특정 요소를 카운트 */" << endl;
    cout << target << " appears " << count << " times" << endl << endl;

    /* 각 요소의 합 */
    int sum = 0;
    for_each(vec.begin(), vec.end(), [&](int n){ //sum을 실제로 바꿔야 하므로 & 붙임
        sumElement(sum, n); });
    cout << "/* 각 요소의 합 */" << endl;
    cout << "sum : " << sum << endl << endl;

    /* 특정 조건에 맞는 요소만 출력 */
    cout << "/* 특정 조건에 맞는 요소만 출력 */" << endl;
    for_each(vec.begin(), vec.end(), [](int n){
        printIfEven(n);
    });
    cout << endl << endl;

    /* 사용자 정의 객체에 대한 작업 */
    vector<Person> people = {
        {"Alice", 30},
        {"Kiyun", 27},
        {"Paul", 25}
    };
    cout << "/* 사용자 정의 객체에 대한 작업 */" << endl;
    for_each(people.begin(), people.end(), printPerson);   
    cout << endl;
}