/*
CSC 134
M3T1 - 
Jeff-Michael Fowe
02/14/24
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double width1, length1, area1, width2, length2, area2;
    cout << fixed << setprecision(2);
    cout << "What is the first rectangle's width? ";
    cin >> width1;
    cout << "What is the first rectangle's length? ";
    cin >> length1;
    area1 = length1 * width1;
    cout << "The area of the first rectangle is " << area1 << endl;
    cout << "What is the second rectangle's width? ";
    cin >> width2;
    cout << "What is the second rectangle's length? ";
    cin >> length2;
    area2 = length2 * width2;
    cout << "The area of the second rectangle is " << area2 << endl;
    if (area1>area2)
    {
        cout << "The first rectangle is bigger than the second";
    }
     else if (area1 < area2)
    {
        cout << "The second rectangle is bigger than the first";
    }
    else
    {
        cout << "Both are the same size";
    }
    return 0;
}