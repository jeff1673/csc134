/*
CSC 134
M2HW1 - Gold
Jeff-Michael Fowe
02/12/24
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    string fname, lname, full_name;
    double acc_num, ini_balance, deposit, withdrawal, fin_balance;
    acc_num = 123445;
    cout << Question 1 << endl;
    cout << "What is your first name?" ;
    cin >> fname;
    cout << "What is your last name?";
    cin >> lname;
    cout << "What is your starting account balance?";
    cin >> ini_balance;
    cout << "What amount do you wish to deposit?";
    cin >> deposit;
    cout << "How much do you wish to withdraw?";
    cin >> withdrawal;
    full_name = fname + " " + lname;
    cout << "Account name:  " << full_name << endl;
    cout << "Account number:  " << acc_num << endl;
    fin_balance = ini_balance + deposit - withdrawal;
    cout << fixed << setprecision(2);
    cout << "Final account balance: $" << fin_balance << endl;



}