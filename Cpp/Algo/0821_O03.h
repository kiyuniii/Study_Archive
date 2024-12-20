#ifndef __0821_O03_H__
#define __0821_O03_H__

#include <iostream>
using namespace std;

class Exp {
private:
    int num;
    int pow;
public:
    Exp() { num = 1, pow = 1; }
    Exp(int a) { num = a, pow = 1; }
    Exp(int a, int b) { num = a, pow = b; } 

    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp);
};

int Exp::getValue() {
    int result = 1;
    for(int i=0; i<pow; i++) {
        result *= num;
    }
    return result;
}

int Exp::getBase() {
    return num;
}

int Exp::getExp() {
    return pow;
}

bool Exp::equals(Exp n) {
    if(n.getValue() == getValue()) { 
        return 1;
    }
    else return 0;
}

#endif//__0821_O03_H__
