#include <iostream>

using namespace std;

int main() {
    int i = 65;
    float f = 5.2f;

    double d = i + f;
    cout << "double: " << d << endl;

    /* double -> int : 버림 */
    cout << "double -> int  : " << static_cast<int>(d) << endl;
    cout << "  int  -> char : " << static_cast<char>(d) << endl;
}