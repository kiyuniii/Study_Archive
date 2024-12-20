#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    Base(const string &name) : name(name) {
        cout << "Base constructor called for " << name << endl;
    }

    virtual ~Base() {
        cout << "Base destructor called for " << name << endl;
    }

    virtual void display() const {
        cout << "Name: " << name << endl;
    }

protected:
    string name;
};

class Derived : public Base {
public:
    Derived(const string &name, Base *ptr = nullptr) 
        : Base(name), ptr(ptr) {
        cout << "Derived constructor called for " << name << endl;
    }

    ~Derived() {
        cout << "Derived destructor called for " << name << endl;
    }

    void display() const override {
        Base::display();
        if (ptr) {
            cout << "Has a pointer to Base object named: ";
            ptr->display();
        }
    }

private:
    Base *ptr; // 포인터형 멤버 변수
};

int main() {
    Base *basePtr = new Base("BaseObject");

}