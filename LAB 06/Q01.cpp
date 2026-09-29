// Distance Addition
// Create a class Distance containing feet and inches.
// Overload the + operator to add two Distance objects. If the total number of inches is 12
// or more, convert the excess inches into feet.
// For example:
// Distance 1: 5 feet 8 inches
// Distance 2: 3 feet 7 inches
// Result: 9 feet 3 inches
// The overloaded operator should return the resulting Distance object


#include <iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    // constructor
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }
     // operator overload
    Distance operator+(Distance d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches %= 12;
        }

        return temp;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(3, 7);

    Distance d3 = d1 + d2;

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Result: ";
    d3.display();

    return 0;
}