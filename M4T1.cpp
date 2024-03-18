#include <iostream>

using namespace std;

void question1()
{
    //count from 1 to 10
    //part 1
    int count = 0;
    const int MAX = 10;
    while (count <= MAX){
        cout << "Counting:" << count << endl;
        // increase the count -- all three do the same thing
        // count = count +1
        count += 1;
        //  count++;
    }
    cout << "Finished" << endl;
}
void question2()
{
     // part 2 - table of squares
     cout << "Part 2 - Table of Squares" << endl;
     const int MIN_NUM = 1;
     const int MAX_NUM = 10;
     int num = MIN_NUM;
     //print the header
     cout << "Number\tNumber Squared" << endl;
     cout << "-------------------------" << endl;
     while (num <= MAX_NUM) {
        cout << num << "\t" << num*num << endl;
        num++;
     }
}
void question3()
{
    int length = 0;
    int width = 0;
    cout << "What is the dimension of the block you want? " ;
    cin  >> length;
    const int MAX = length;
    while (length <= MAX){
        cout << "*  " << endl;
        // increase the count -- all three do the same thing
        // count = count +1
        length += 1;
        //  count++;
    }
    cout << "Finished" << endl;
}
    int main()
    {
        question1();
        question2();
        //question3();
    return 0;
}