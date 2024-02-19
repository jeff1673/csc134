/*
CSC 134
M3LAB1 - Choices
Jeff-Michael Fowe
02/19/24
*/

// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  string choice;
  string choice2;


  // ask the question
  cout << "Do you choose Ham or turkey subway?" << endl;
  cout << "Type Ham or Turkey: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if ("Ham" == choice) {
  	cout << "You chose Ham" << endl;
     cout << "Would you like coffee as well? Yes or No?" << endl;
        cin >> choice2;
  }
        if ("Yes" == choice2) {
            cout << "Here is your coffee. Have a great day" << endl;
        }
        else if (choice2 == "No") {
            cout << "Here is your sandwich. Have a great day" << endl;
        }
  
  else if ("Turkey" == choice) {
  	cout << "You chose Turkey" << endl;
    cout << "Turkey is just chicken more difficult to cook!" << endl;
    cout << "Choose another sandwich" << endl;
    cin >> choice;
    if ("Ham" == choice){
        cout << "Would you like coffee as well? Yes or No?" << endl;
        cin >> choice2;
    }
        if ("Yes" == choice2) {
            cout << "Here is your coffee. Have a great day" << endl;
        }
        else if (choice2 == "No") {
            cout << "Here is your sandwich. Have a great day" << endl;
        }
    else if ("Turkey" == choice) {
        cout << "You don't need coffee" << endl;
    }
    else {
        cout << "That's not an option!" << endl;
    }
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for eating with us!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method