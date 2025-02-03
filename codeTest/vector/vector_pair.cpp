#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> v;

    /* 입력 */
    for(int i=0; i<N; i++) {
        v.push_back(make_pair(i,i+2));
    }

    /* 출력 */
    for(int i=0; i<N; i++) {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}