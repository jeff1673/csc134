/*
CSC 134
M1LAB - Apple Sales
Jeff-Michael Fowe
01/24/24
*/ 

#include <iostream>
using namespace std;

int main() 
{
    cout << "M1LAB - Apple Sales" << endl;
    // Simulate selling apples
    // Set up variables (nouns)
    string name = "Fowe";
    int num_apples = 20;
    double price_per_apple = 0.25;

    // Do the calculations
    double total_price = 0;
    // NOTE: math operations are + - * /
    total_price = num_apples * price_per_apple;

    // Print the output
    cout << "Welcome to the " << name << " Apple Orchard" << endl;
    cout << "We have " << num_apples << " apples for sale." << endl;
    cout << "at a cost of $" << price_per_apple << " each." << endl;
    cout << "For a total cost of $" << total_price << endl;

  return 0;
}