// Student ID Search
// A university receives a variable number of student IDs.
// Write a program that:
// 1. Dynamically allocates memory for nstudent IDs.
// 2. Accepts all student IDs.
// 3. Searches for a particular ID using pointer traversal.
// 4. Displays whether the ID is found and its position.
// 5. Properly deallocates the memory.
// Condition: Do not use array indexing while searching.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of students: ";
    cin >> n;

    // 1. Dynamically allocate memory
    int *student_IDs = new int[n];

    // 2. Accept student IDs
    cout << "Enter " << n << " student IDs:" << endl;
    int *ptr = student_IDs;
    for (int i = 0; i < n; i++) {
        cin >> *ptr;
        ptr++;
    }

    int target_ID;
    cout << "Enter Student ID to search: ";
    cin >> target_ID;

    // 3. Search for particular ID using pointer traversal (no array indexing)
    ptr = student_IDs;
    bool found = false;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (*ptr == target_ID) {
            found = true;
            position = i;
            break;
        }
        ptr++;
    }

    // 4. Display result
    if (found) {
        cout << "ID " << target_ID << " found at index " << position << " (Position " << position + 1 << ")." << endl;
    } else {
        cout << "ID " << target_ID << " was not found." << endl;
    }

    // 5. Proper deallocation
    delete[] student_IDs;

    return 0;
}



