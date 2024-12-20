#include <iostream>
using namespace std;

class Car {
private:
    int price;
public:
    Car(int price = 0) {
        this->price = price;
    }
    ~Car() { }
    
    int getPrice() {
        return price;
    }
};

class Laptop : virtual public Car {
private:
    int priceLaptop;
public:
    Laptop(int price, int )
}