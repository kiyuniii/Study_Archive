#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {
    int a, b, big = 0;
    cin >> a >> b;
    bigger(a, b, big);

    cout << big << endl;
}

bool bigger(int a, int b, int& big) {
    if(a == b)
        return true;
    else {
        int max = a;
        if(a < b) max = b;
        big = max;
        return false;
    }
}
