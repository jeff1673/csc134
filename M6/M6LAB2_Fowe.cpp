/*
CSC 134
M6LAB2 - Arrays, Vectors and Linked lists
Jeff-Michael Fowe
4/24/24
*/

#include <iostream>
#include <vector>

using namespace std;

// 3 examples
void array_examples();
void vector_examples();
void linked_list();
struct Node
{
    int num; // the data
    Node* next; // pointer to next node
};


int main() {
    cout << "" << endl;
    array_examples();
    vector_examples();
    linked_list();
    return 0; 
}

// 3 examples -- full functions
void array_examples(){
    cout << "Example 1: Array" << endl;
    const int SIZE = 5; // absolute max
    int max = 3;        // current max
    int nums[SIZE] = {1,2,2,0,0};
    // add a fourth item
    nums[max] = 3;
    max = max+1;
    // print each item
    for (int i=0; i<max; i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
}

void vector_examples(){
    // requires the #include <vector> command up top
    vector<int> nums;// an empty vector of integers
    // add items to the end
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    cout << "Vector contains " << nums.size() << " numbers" << endl;
    // index access works like arrays
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
    // or use member access
    for (int num: nums) {
        cout << num << ",";
    }
    cout << endl;
    cout << "It can hold " << nums.capacity() << " before resizing" << endl;
}

void linked_list(){
    cout << "Example 3: Linked Lists" << endl;
    Node first;
    first.num = 1 ;
    first.next = nullptr; // null pointer -- "nowhere"
    Node second;
    second.num = 2;
    second.next = nullptr;
    Node third;
    third.num = 3;
    third.next = nullptr;

    // print out the first node
    cout << "first.num = " << first.num << endl;
    Node* head = &first; // point to adress of first
    first.next = &second; // first points to second
    second.next = &third;

    // Finally, walk the list and print each item
    Node * probe = head; // probe is our temporary pointer
    while (probe != nullptr) {
        cout << "Next node: " << probe->num << endl;
        probe = probe->next;
    }
    cout << "Reached end of list" << endl;
}