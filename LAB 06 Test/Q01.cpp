//  Delivery Counter
// A delivery company stores the number of parcels delivered in a variable.
// Write a C++ program that creates a pointer to this variable. Display the number of parcels
// using the pointer, inc the number by a value entered by the user using the pointer,
// and display the updated number.

#include <iostream>
using namespace std;

int main() {
    int par = 10;  // Initial number of parcels
    int* ptr = &par;  // Pointer to the parcels variable

    cout << "Initial number of parcels: " << *ptr << endl;

    int inc;
    cout << "Enter the number of parcels to add: ";
    cin >> inc;

    *ptr += inc;  // inc the number using the pointer

    cout << "Updated number of parcels: " << *ptr << endl;

    return 0;
}