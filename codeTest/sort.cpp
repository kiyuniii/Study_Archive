#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_with_array();
void sort_with_vector();

int main() {
    int input;

    while(1) {
        cout << "sort_with_array() : enter 1" << endl;
        cout << "sort_with_vector(): enter 2" << endl;
        cout << ">> ";
        cin >> input;

        switch(input) {
            case 1:
                sort_with_array();
                break;
            case 2:
                sort_with_vector();
                break;
            default:
                cout << "wrong input, try again";
                break;
        }
    }
}

void sort_with_array() {
    int arr[9] = {3, 2, 1, 4, 5, 10, 45, 32, 7};
    
    /* 오름차순 정렬 */
    sort(arr, arr+9);   //sort(시작주소, 끝주소): 정렬할 데이터의 범위 설정

    for(int i=0; i<9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    /* 내림차순 정렬 */
    sort(arr, arr+9, greater<int>());
    for(int i=0; i<9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort_with_vector() {
    vector<int> v;
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        v.push_back(i);
    }

    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) 
        cout << v[i] << " ";
    cout << endl;
    
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}