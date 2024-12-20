#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int radius = 0) {
        this->radius = radius;
    }
    int getRadius() {
        return radius;
    }
};

template <class T>
void myswap(T & a, T & b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a=3, b=4;
    myswap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    double c = 3.2, d = 6.3;
    myswap(c, d);
    cout << "c = " << c << ", d = " << d << endl;

    Circle e(2), f(5);
    myswap(e, f);
    cout << "e = " << e.getRadius() << ", f = " << f.getRadius() << endl;

}