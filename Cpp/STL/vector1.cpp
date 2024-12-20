#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> sv;
    cout << "Enter 5 names : " << endl;
    string name;
    for(int i=0; i<5; i++) {
        cout << i+1 << ">>";
        cin >> name;
        sv.push_back(name);
    }
    
    string last;
    last = sv[0];
    for(int i=0; i<sv.size(); i++) {
        if(last < sv[i+1]) {
            last = sv[i+1];
        }
    }

    cout << last;
}