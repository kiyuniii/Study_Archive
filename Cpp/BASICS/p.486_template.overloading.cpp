#include <iostream>
using namespace std;

template <typename T>
void print(T array[], int n) {
    for(int i=0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int n = 5;
    
    print(x, 5);
    print(d, 5);
}