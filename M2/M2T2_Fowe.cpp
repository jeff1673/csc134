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
    double price_per_app = 0.25;
    double total_cost;
    cout <<"Hi, what is your name? " "\t\t\t";
    cin >> name;
    cout << "Welcome to our orchard, " << "\t\t" << name << "." << endl;
    cout << "Each apple costs " << "\t\t\t$" << price_per_app << "." << endl;
    cout << "How many apples would you like to get?" "\t";
    cin >> num_apples; 
    total_cost = num_apples * price_per_app;
    cout << "It will cost " << "\t\t\t\t$" << total_cost << endl;
    cout << fixed << setprecision(2);

    return 0;
}