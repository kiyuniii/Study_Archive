#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "ABCDEFGHIJK";
    cout << "PREV : " << str << endl;

    int pos = 3;        //시작 위치
    int length = 5;     //변경할 문자 길이(개수)
    string s = "HELLO"; //대체할 문자열

    /* 문자열의 특정 부분을 다른 문자열로 대체 */
    str.replace(pos, length, s);

    cout << "AFTER: " << str << endl;
}