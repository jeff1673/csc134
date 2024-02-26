/*
CSC 134
M3HW1 - Gold
Jeff-Michael Fowe
02/20/24
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void question1()
{
    cout << "Question 1" << endl;
    string answer1;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like? Please reply yes or no." << endl;
    cin >> answer1;
    if (answer1 == "yes")
    {
        cout << "That's great! I'm sure we'll get along" << endl;
    }
    else if (answer1 == "no")
    {
        cout << "Well, maybe you'll learn to like me later" << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl ;
    }
}
void question2()
{
    cout << endl ;
    cout << "Question 2" << endl;
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
void question3()
{
    cout  << endl;
    cout << "Question 3"<< endl;
    string game_resp1;
    string game_resp2;
    cout << "Welcome to: Choices define who we are " <<endl;
    cout << "You encounter a cave and a dungeon. In which do you decide to venture? " ;
    cin >> game_resp1;
    if (game_resp1 == "dungeon")
    {
        cout << "In the dungeon, you encounter two passages. Which passage do you choose? A or B ? ";
        cin >> game_resp2;
    }
        if (game_resp2== "B")
        {
            cout << "You win!" << endl;
        }
        else if (game_resp2 == "A")
        {
            cout << "Game Over!";
        }
    else
    {
        cout << "Game Over!" << endl ;
    }
}
void question4()
{
    cout << endl << endl;
    cout << "Question 4" << endl;
    int num_1, num_2, rand_guess, rand_ans;
    srand (time(0));
    num_1 = rand() % 10;
    num_2 = rand() % 10;
    rand_ans = num_1 + num_2;
    cout << num_1 << " + " << num_2 << "= ?" <<endl;
    cin >> rand_guess;
    if (rand_guess == rand_ans)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect." << endl;
    }
}
int main()
{
    question1();
    question2();
    question3();
    question4();
    return 0;
}