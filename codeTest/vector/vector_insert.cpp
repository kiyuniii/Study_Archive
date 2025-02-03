#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    v = {20, 40, 30, 10, 60, 50};

    v.insert(v.begin(), 100);
    v.insert(v.begin()+2, 1);
    v.insert(v.end(), 99);

    /* 범위 기반 for 루프 */
    cout << "[출력] 범위 기반 for 루프" << endl;
    for(auto num : v) {
        cout << num << " ";
    }
    cout << endl << endl;

    /* 반복자(iterator) 사용 */
    cout << "[출력] 반복자 사용" << endl;
    for(auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}