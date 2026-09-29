// Parking Slot Monitor
// A parking system does not know in advance how many parking slots it needs to store.
// Write a program that:
// 1. Dynamically allocates memory for nparking slot statuses.
// 2. Uses 0 for available and 1 for occupied.
// 3. Counts available and occupied slots using a pointer.
// 4. Releases the dynamically allocated memory.



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of parking slots: ";
    cin >> n;

    // 1. Dynamically allocate memory
    int *slots = new int[n];

    // 2. 0 for available, 1 for occupied
    cout << "Enter status for each slot (0 = Available, 1 = Occupied):" << endl;
    int *ptr = slots;
    for (int i = 0; i < n; i++) {
        cin >> *ptr;
        ptr++;
    }

    // 3. Count available and occupied slots using pointer
    int avb_count = 0, occ_count = 0;
    ptr = slots; // Reset pointer to start of allocated memory
    for (int i = 0; i < n; i++) {
        if (*ptr == 0) {
            avb_count++;
        } else if (*ptr == 1) {
            occ_count++;
        }
        ptr++;
    }

    cout << "Total Available Slots: " << avb_count << endl;
    cout << "Total Occupied Slots:  " << occ_count << endl;

    // 4. Release dynamically allocated memory
    delete[] slots;

    return 0;
}