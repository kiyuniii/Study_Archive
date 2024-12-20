#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    int topOfStack;
    T data[100];
public:
    Stack();
    void push(T element);
    T pop();
};

template <typename T>
Stack<T>::Stack() {
    topOfStack = -1;
}

template <typename T>
void Stack<T>::push(T element) {
    if(topOfStack == 99) {
        cout << "Stack Full!";
        return;
    }
    else {
        topOfStack++;
        data(topOfStack) = element;
    }
}

template <typename T>
T Stack<T>::pop() {
    return data[topOfStack];
    topOfStack--;
}