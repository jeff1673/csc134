/*
CSC 134
M2T1 - Receipt
Jeff-Michael Fowe
01/29/24
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{   
    cout << "Thank you for coming here" << endl;
    cout << "----------------------" << endl;
    string meal = "Chawarma";
    // all in $, except the percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do callculations
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;

    // print the receipt
    // print this oncce to set thhe decimals to exactly 2
    cout << fixed << setprecision(2);
    cout << meal << ":" "\t$" << meal_price << endl;
    cout << "tax:" << "\t\t$" << tax_amount << endl;
    cout << "----------------------" << endl;
    cout << "Total:" << "\t\t$" << total << endl; 

    return 0;
}