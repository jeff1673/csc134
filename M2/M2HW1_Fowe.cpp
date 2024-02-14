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
    cout << "Question 1" << endl;
    cout << "What is your first name? " ;
    cin >> fname;
    cout << "What is your last name? ";
    cin >> lname;
    cout << "What is your starting account balance? ";
    cin >> ini_balance;
    cout << "What amount do you wish to deposit? ";
    cin >> deposit;
    cout << "How much do you wish to withdraw? ";
    cin >> withdrawal;
    full_name = fname + " " + lname;
    cout << "Account name:  " << full_name << endl;
    cout << "Account number:  " << acc_num << endl;
    fin_balance = ini_balance + deposit - withdrawal;
    cout << fixed << setprecision(2);
    cout << "Final account balance: $" << fin_balance << endl << endl << endl;
    


    // Next Question

    cout << "Question 2" << endl;
      double cost_per_cubic_foot, charge_per_cubic_foot, length, width, height, area, volume, cost, charge, profit;
    cost_per_cubic_foot = 0.3;
    charge_per_cubic_foot = 0.52;
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
    cout << "The profit is: $"<< profit << endl << endl << endl;
    
    // Next Question

    cout << "Question 3" << endl;
    int num_pizza, slice_per_pizza, num_visitors, rem_pizza;
    cout << "How many pizzas do you wish to order?";
    cin >> num_pizza;
    cout << "How many slices per pizza?" ;
    cin >> slice_per_pizza;
    cout << "How many visitors are you expecting?";
    cin >> num_visitors;
    rem_pizza = (slice_per_pizza * num_pizza) - (3 * num_visitors);
    cout << "The number of pieces of pizza left is " << rem_pizza << endl << endl << endl;

    // Next Question
    cout <<"Question 4" <<endl;
    string letsGo, school, team, cheerOne, cheerTwo;
    letsGo = "Let's go";
    school = "FTCC";
    team = "Trojans";
    cheerOne = letsGo + " " + school;
    cheerTwo = letsGo + " " + team;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;   

    
    


    return 0;
}