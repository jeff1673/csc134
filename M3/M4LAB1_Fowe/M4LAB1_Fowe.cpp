/*
CSC-134
M4LAB1
Jeff-Michael Fowe
03/06/24
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "M4LAB1" << endl;
    //TODO: ask user for width and height
    int width ;
    int height;
    cout << "What is the width? ";
    cin >> width;
    cout << "What is the height? ";
    cin >> height;
    //first a row
    for (int i=0; i < width; i++){
        cout << "# ";
    }
    // next a column
    for (int i=0; i < height; i++){
        cout << "#" << endl;
    }
    cout << endl << endl;

    // put it together - nested loops
    for (int i=0; i < height; i++){
        for (int j=0; j < width; j++){
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
