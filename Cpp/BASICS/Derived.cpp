#include <iostream>
#include <string>
using namespace std;

class TV {
private:
    int size;
public:
    TV(int size=20) {
        this->size = size;
    }
    ~TV() { }
    int getSize() { return size; }
};

/*
class WideTV : public TV {

}
*/