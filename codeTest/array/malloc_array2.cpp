/* 2차원 배열의 동적할당 */
#include <iostream>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int** arr = new int* [r];   //int** arr: int*라는 1차원 배열(행) r개의 포인터
    for(int i=0; i<r; i++) {    //r개의 행들 중
        arr[i] = new int [c];   //각 행은 int [c]라는 c개의 원소를 가진 1차원 배열이다.
    }

    /* 입력 / 출력 */

    for(int i=0; i<r; i++) {
        delete[] arr[i];        //arr[i] = new int [c];
    }
    delete[] arr;               //int** arr = new int* [r];
}