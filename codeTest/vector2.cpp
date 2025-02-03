#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> v2;
    vector<int> v1;

    /* 2차원 벡터 정의 */
    for(int i=0; i<r; i++)
        v1.push_back(i);
    for(int i=0; i<c; i++) 
        v2.push_back(v1);

    /* 입력 */
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> v2[i][j];
        }
    }

    /* 출력 */
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
}