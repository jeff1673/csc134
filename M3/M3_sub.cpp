#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
      cout << "Thank you for coming here" << endl;
    cout << "----------------------" << endl;
    string meal = "Chawarma";
    
    // all in $, except the percent
    double meal_price;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total_1 = 0;
    double total_2 = 0;
    double tip;
    string d_t;

    // do callculations
   

    // print the receipt
    // print this oncce to set thhe decimals to exactly 2
    cout << fixed << setprecision(2);
    cout <<"What is the price of the meal?" << endl;
    cin >> meal_price;
    cout << "Are you dining-in or taking-away?" << endl;
    cin >> d_t;
    cout << "You chose: " << d_t << endl;
    tax_amount = meal_price * tax_percent;
    total_2 = meal_price + tax_amount;
    cout << meal << ":" "\t$" << meal_price << endl;
    cout << "tax:" << "\t\t$" << tax_amount << endl;
    if (d_t == "taking-away")
    {
    cout << "----------------------" << endl;
    cout << "Total:" << "\t\t$" << total_2 << endl << endl; 
    }
    else
    {
    tip = 0.15 * meal_price;
    total_1 = meal_price + tax_amount + tip;
    cout << "tip:" << "\t\t$" << tip << endl;
    cout << "----------------------" << endl;
    cout << "Total:" << "\t\t$" << total_1 << endl; 
    }
}