/*
CSC 134
M2T1 - Receipt
Jeff-Michael Fowe
01/29/24
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{   
    string meal = "Chawarma";
    // all in $, except the percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do callculations

    // print the receipt
    // TODO: make it line up, and fix decimals
    cout << meal << "\t$" << meal_price  << endl;
    cout << "tax" << "\t\t$" << tax_amount << endl;
    cout << "total" << "\t\t$" << total << endl; 
    return 0;
}