/*
CSC 134
M2LAB1 - Crate sales
Jeff-Michael Fowe
02/05/24
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    // Take 1 - just a rectangle
    // Declare variables
    double cost_per_cubic_foot, charge_per_cubic_foot, length, width, height, area, volume, cost, charge, profit;
    cost_per_cubic_foot = 0.23;
    charge_per_cubic_foot = 0.5;
    // Ask for user input
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "What is the height? ";
    cin >> height;

    // Do calculations
    volume = length  * width * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;

    // print the answer
    cout << fixed << setprecision(2);
    cout << "The volume is: "<< volume << endl;
    cout << "The cost is: $"<< cost << endl;
    cout << "The charge is: $"<< charge << endl;
    cout << "The profit is: $"<< profit << endl;
    
    

    
    return 0;
}