#include <iostream>
#include <cstring>
using namespace std;

char& find(char a[], char c, bool& success) {
    for(int i=0; i<strlen(a); i++) {
        if(a[i] == c) {
            success = true;
            return a[i];
        }
    }
    success = false;
    return a[strlen(a)];
}

int main() {
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false) {
        cout << "error" << endl;
        return 0;
    }
    loc = 'm';
    cout << s << endl;
}