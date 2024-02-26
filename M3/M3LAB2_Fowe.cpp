/*
CSC 134
M3LAB2 - 
Jeff-Michael Fowe
02/26/24
*/

#include <iostream>
using namespace std;
void question1()
{
    int grade;
    cout << "What is your grade ? " ;
    cin >> grade;
    cout << "The number grade is: " << grade << endl;
    if (grade < 59 )
    {
        cout << "Your grade is F" << endl;
    }
    else if (grade > 59 && grade < 70 )
    {
        cout << "Your grade is D" << endl;
    }
    else if (grade > 69 && grade < 80 )
    {
        cout << "Your grade is C" << endl;
    }
    else if (grade > 79 && grade < 90 )
    {
        cout << "Your grade is B" << endl;
    }
    else 
    {
        cout << "Your grade is A" << endl;
    }
   
}
int main()
{
    question1();
    return 0;
}
