/*
CSC - 134
M4HW1 - Gold
Jeff-Michael Fowe
03/17/24
*/

#include <iostream>
using namespace std;

void part1()
{
    cout << "part 1" << endl;
    int n,m;
    for (n=1; n<=12; n++)
    {
    m=5*n;
    cout << "5 times " << n << " is " << m << endl;
    }
}

void part2()
{
    cout << "part 2" << endl;
    int num = 0;
    int n;
    int m;
    cout << "Enter a number from 1-12 ";
    cin>> num;
    for (n=1; n<=12; n++)
    {
        m = num * n;
        cout << num << " times " << n << " is " << m << endl;
    }

}
    
void part3()
{
   cout << "Part 3" << endl;
     int num = 0;
    int n;
    int m;
    cout << "Enter a number from 1-12 ";
    
    
      while(cin>>num)
    {
        if(num>12 || num < 0){
        cout << "Enter a number from 1-12 ";
        
        }
        else{
         for (n=1; n<=12; n++)
    {
         m = num * n;
        cout << num << " times " << n << " is " << m << endl;
      
    }
        }
    }
}

int main()
{
    //part1();
    //part2();
    part3();
    return 0;
}
