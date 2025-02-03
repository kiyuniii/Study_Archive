#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1;
    string str2 = "ABCDEFG";
    
    string str3(str2);
    string str4(str2, 0, 5);
    string str5(10, '*');

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;

    return 0;
}