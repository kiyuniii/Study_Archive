#include <iostream>
#include <vector>    vector<int> v = {10, 20, 30, 40, 178, 50};

#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    v = {10, 30, 20, 60, 50, 40};

    /* 탐색 */
    auto iter = find(v.begin(), v.end(), 40);              //반복자 찾기(iterator)
    auto idx  = find(v.begin(), v.end(), 40) - v.begin();  //인덱스 찾기
    
    cout << "찾는값: " << *iter << endl;
    cout << "위치  : " << distance(v.begin(), iter) << endl;
    cout << "인덱스: " << idx   << endl;
}