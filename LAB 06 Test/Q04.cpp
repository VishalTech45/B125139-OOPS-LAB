// Cinema Seat Update
// A cinema stores 8 seat numbers in an array.
// Write a program that uses pointer arithmetic to change the seat number at a position
// entered by the user.
// Display the seat numbers before and after the update.
// Condition: Do not use arr[position] for updating the element.

#include<iostream>
using namespace std ;

int main() {
    int seats[8] = {11, 22, 33,44, 55,66, 77, 88};
    int *ptr =  seats;

    cout << "Seat numbers before update: ";
    for (int i = 0; i < 8; i++) {
        cout << * (ptr + i) << " ";
    }
    cout << endl;

    int pos, new_seat;
    cout << "Enter seat index to update (0 to 7): ";
    cin >> pos;
    
    cout << "Enter new seat number: ";
    cin >> new_seat;

    // Updating element without using array indexing arr[pos]
    *(ptr + pos) = new_seat;

    cout << "Seat numbers after update:  ";
    for (int i = 0; i < 8; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}


