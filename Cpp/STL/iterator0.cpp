#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);

    vector<int>::iterator it;
    

    for(it=v.begin(); it!=v.end(); it++) {
        int n = *it;    //it가 가리키는 요소를 n에 저장
        n = n*2;        //2를 곱함
        *it = n;        //곱해서 나온 새로운 값을 요소에 저장
    }

    for(it=v.begin(); it!=v.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
}