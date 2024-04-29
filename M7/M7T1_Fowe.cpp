/*
CSC 134
Jeff-MIichael Fowe
4/29/24
*/

#include<iostream>
using namespace std;
class Restaurant {
    private:
    string name; // the name
    double rating; // 0 to 5 stars


public:
    // connstructor
    Restaurant (string n, double r) {
        name = n;
        rating = r;
    }
    void setName(string n) {
        name = n;
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    // print a formatted entry
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }

};
int main(){
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create a restaurant
    Restaurant lunch_place = Restaurant("Mi Casita", 4.5);
    Restaurant breakfast_place = Restaurant("Waffle House", 3.0);
    cout << "Review info" << endl;
    cout << "Breakfast:"<< endl;
    breakfast_place.printInfo();
    cout << lunch_place.getName() << endl;
    cout << lunch_place.getRating() << endl;
    return 0;
}