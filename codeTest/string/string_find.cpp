#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "KOREA";

    if(s.find("KOR") != string::npos) {
        cout << "String that contains \"KOR\" FOUND" << endl;
    } else {
        cout << "String that contains \"KOR\" NOT FOUND" << endl;
    }

    if(s.find("JPN") != string::npos) {
        cout << "String that contains \"JPN\" FOUND" << endl;
    } else {
        cout << "String that contains \"JPN\" NOT FOUND" << endl;
    }
}