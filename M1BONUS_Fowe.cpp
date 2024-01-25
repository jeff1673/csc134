/*
    CSC 134
    M1BONUS
    Jeff-Michael Fowe
    01/24/24
*/

#include <iostream>
using namespace std;
int main()
{
    int height = 8;
    int width = 10;
    int area_rec = 0;
    area_rec = height * width;
    cout << "Problem 1" << endl;
    cout << "The area of the rectangle is " << area_rec << endl;
    // sales_tax is for processing while sales_tax1 is for better presentation of output
    double prod_price = 99.99;
    double sales_tax = 0.08;
    double fin_cost = 0;
    int sales_tax1 = 0;
    sales_tax1 = sales_tax * 100;
    fin_cost = prod_price * sales_tax;
    cout << "Problem 2" << endl;
    cout << "The price of the product is $" << prod_price << ", the tax on the product is " << sales_tax1 << "%. The final cost of the product is " << fin_cost << "." << endl;
    int diameter = 12;
    double pi = 3.14;
    double area_pizza = 0;
    area_pizza = (pi * diameter * diameter)/4;
    cout << "Problem 3" << endl;
    cout << "The area of the pizza is " << area_pizza << " square inches" << endl;
    double area_each_piece = 0;
    area_each_piece = area_pizza/8;
    cout << "Problem 4" << endl;
    cout << "Each piece has an area of " << area_each_piece << " square inches" << endl;
    return 0;
}