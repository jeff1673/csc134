/*
CSC 134
M3T3 - RNG
Jeff-Michael Fowe
02/21/24
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "Welcome to the craps table" << endl;
    //setup variables
    int roll;
    int dice1, dice2;
    int seed;

    //set random seed
    //cout << "Enter lucky number: ";
    //cin >> seed;
    srand (time(0)); // our lucky # is the timr in msec

    //roll the dice
    //cout << "What did you roll? ";
    //cin >> roll;
    dice1 = (rand() % 6) + 1; // 1 to 6 
    dice2 = (rand() % 6) + 1;
    roll = dice1 + dice2;
    

    //get the ressults
    //cout << "Your roll was: (" << dice1 << " + " << dice2 << ")->" << roll << endl;
    cout << "Your rolls were: "  << dice1 << " and " << dice2 << " Total: " << roll <<  endl;
    if (roll == 7 || roll == 11)
    {
        cout << "You win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll ==12)
    {
        cout << "You lose" ;
    }
    
    else 
    {
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }
    
    return 0;
}