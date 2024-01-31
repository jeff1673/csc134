/*
CSC 134
M2T2
Jeff-Michael Fowe
01/31/24
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    int num_apples;
    double price_per_app;
    double total_cost;
    cout << fixed << setprecision(2);
    cout <<"Hi, what is your name? ";
    cin >> name;
    cout << "Welcome to our orchard, " << name << "." << endl;
    cout << "How much does an apple costs ?" << endl;
    cin >> price_per_app;
    cout << "Each apple costs $" << price_per_app << ". How many apples would you like to get?"<< endl;
    cin >> num_apples; 
    total_cost = num_apples * price_per_app;
    cout << "It will cost $"  << total_cost << endl;
    cout << "Here is your receipt" << endl;
      cout << "----------------------" << endl;
    cout << "Number of apples:"  "\t" << num_apples << endl;
    cout << "Price per apple:" "\t$" << price_per_app << endl;
    cout << "Total:" "\t\t\t$" << total_cost << endl;
      cout << "----------------------" << endl;
    return 0;
}