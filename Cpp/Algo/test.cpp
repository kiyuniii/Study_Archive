#include <iostream>

using namespace std;

class Sample {
    static int a;
    int b;
public:
    void f();
    void g();
    static void h();
    static void s(); 
};

int Sample::a;

int main() {
    Sample sample;
    sample.b = 5;
    sample.a = 5;
    Sample::f();
    Sample::h();
}