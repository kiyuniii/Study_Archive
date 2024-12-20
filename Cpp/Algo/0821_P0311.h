#ifndef __0821_P0311_H__
#define __0821_P0311_H___

#include <iostream>
using namespace std;

class Box {
    int width, height;
    char fill;
public:
    Box(int w, int h); 
    void setFill(char f); 
    void setSize(int w, int h);
    void draw();
};

#endif//__0821_P0311_H__