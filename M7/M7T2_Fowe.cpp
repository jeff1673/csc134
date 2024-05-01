/*
M7T2 - Rectangles
Jeff-Michael Fowe
CSC 134
05/01/2024
*/

#include <iostream>
#include "Rectangle.h"
using namespace std;


int main(){
    cout << "M7T2" << endl;
    double w, l;

    //Rectangle r1;
    cout << "What is the width of the rectangle? " ;
    cin >> w;
    cout << "What is the length of the rectangle? " ;
    cin >> l;
    //r1.setWidth(w);
    //r1.setLength(l);
    Rectangle r1(l, w);
    cout << "The rectangle is ";
    cout << r1.getLength() << " by " << r1.getWidth() << endl;
    cout << "The area of the rectangle is " << r1.getArea() << endl;
    return 0;
}