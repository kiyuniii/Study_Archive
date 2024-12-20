#include <iostream>
using namespace std;

class circle {
public:
    int radius;
    circle();
    circle(int r);
    ~circle();
    double getArea();
};

circle::circle() {
    radius = 1;
    cout << "radius(c1)" << radius << endl;
}

circle::circle(int r) {
    radius = r;
    cout << "radius(c2)" << radius << endl;
}

circle::~circle() {
    cout << "radius(" << radius << ") destruct" << endl;
}

double circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    circle donut;
    circle pizza(30);
    double area;
    area = pizza.getArea();
    cout << "pizza: " << pizza.getArea() << endl;
    donut.getArea();
    cout << "donut: " << donut.getArea() << endl;
}