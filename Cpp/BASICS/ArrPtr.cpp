#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int Array[] = {1, 2, 3, 4, 5};
    int size = sizeof(Array)/sizeof(Array[0]);

    printArray(Array, size);
}
//-----------------------------------------------------
#include <iostream>
using namespace std;

void printArray(int *arr, int size) {
    for(int i=0; i<size; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int Array[] = {1, 2, 3, 4, 5};
    int size = sizeof(Array)/sizeof(Array[0]);

    printArray(Array, size);
}