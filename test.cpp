 #include<iostream>
using namespace std;
int main(){ 
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

    return 0;
}