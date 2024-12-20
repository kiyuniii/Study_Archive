#include "0821_P0311.h"

Box::Box(int w, int h) { 
    setSize(w, h); fill = '*'; }

void Box::setFill(char f) { 
    fill = f; }

void Box::setSize(int w, int h) { 
    width = w; height = h; }

void Box::draw() {
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++)
            cout << fill;
        cout << endl;
    }
}