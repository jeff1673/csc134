/*
CSC 134
M3HW1 - Gold
Jeff-Michael Fowe
02/20/24
*/

#include <iostream>
using namespace std;
int main()
{
    string answer1;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like? Please reply yes or no." << endl;
    cin >> answer1;
    if (answer1 == "yes")
    {
        cout << "That's great! I'm sure we'll get along" << endl;
    }
    else if (answer1 == "no")
    {
        cout << "Well, maybe you'll learn to like me later" << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }
    return 0;
}