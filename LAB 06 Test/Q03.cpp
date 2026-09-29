// Library Shelf
// A library stores the identification numbers of 6 books in an array.
// Write a program to:
// 1. Display all book IDs using a pointer.
// 2. Display the address of each book ID.
// Condition: Traverse the array using pointer increment

#include <iostream>
using namespace std;

int main() {
    int bookIDs[6] = {11, 12, 13, 14, 15, 16};
    int *ptr = bookIDs;

    cout << "Library Shelf Book Identification :" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Book ID: " << *ptr <<endl;
        cout << "Address: " << ptr << endl;
        ptr++; // Traversal via pointer increment
    }

    return 0;
}