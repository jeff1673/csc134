#include <iostream>
using namespace std;

double sum(double, double);
double divide(double, double);
double multiply(double, double);

double sum(double num1, double num2)
{
    double num_sum = num1+num2 ;
    return num_sum;
}

double divide(double num1, double num2)
{
    double num_div = num1/num2;
    return num_div;
}

double multiply(double num1, double num2)
{
    double num_prod = num1*num2;
    return num_prod;
}
int main()
{
    double val1, val2, val_sum, val_sub, val_mul, val_div;
    int resp; //this is the answer of the user to the question
    //string sign;
    //string sign_sub = "-";
    //string sign_div = "/";
    //string sign_mul = "*";
    cout << "Press 1 if you want to perform an addition" << endl;;
    cout << "Press 2 if you want to perform a subtraction" << endl ;
    cout << "Press 3 if you want to perform a multiplication" << endl;
    cout << "Press 4 if you want to perform a division" << endl ;
    cout << "Press 5 if you want to perform a square root" << endl ;
    cout << "Press 6 if you want to perform OTHER" << endl ;
    while (cin>>resp)
    {
        if (resp>6 || resp<0)
        {
    cout << "Press 1 if you want to perform an addition" << endl;;
    cout << "Press 2 if you want to perform a subtraction" << endl ;
    cout << "Press 3 if you want to perform a multiplication" << endl;
    cout << "Press 4 if you want to perform a division" << endl ;
    cout << "Press 5 if you want to perform a square root" << endl ;
    cout << "Press 6 if you want to perform OTHER" << endl ;
        }
        else{
            cout << "Enter two numbers " ;
   cin >> val1;
   cin >> val2;
   
   if (resp == 1){
   val_sum = sum(val1, val2);
   cout << "Their sum is " << val_sum << endl;
   }
   else if (resp == 3)
   {
        val_mul = multiply(val1, val2);
        cout << "Their product is " << val_mul << endl;
   }
   else if (resp == 4)
   {
        val_div = divide(val1, val2);
        cout << "Their quotient is " << val_div << endl;
   }
   else{
    cout << "Enter a valid operator" << endl;
   }

        }
    }
   
   /*
   cout << "Enter two numbers " ;
   cin >> val1;
   cin >> val2;
   
   if (resp == 1){
   val_sum = sum(val1, val2);
   cout << "Their sum is " << val_sum << endl;
   }
   else if (resp == 3)
   {
        val_mul = multiply(val1, val2);
        cout << "Their product is " << val_mul << endl;
   }
   else if (resp == 4)
   {
        val_div = divide(val1, val2);
        cout << "Their quotient is " << val_div << endl;
   }
   else{
    cout << "Enter a valid operator" << endl;
   }
*/

   return 0;
}