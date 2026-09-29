#include <iostream>
using namespace std;
// 1. Overloaded function: Add value to an integer (using reference to modify directly)
void modifyValue(int& val, int amount) {
    val += amount;
}

// 2. Overloaded function: Add value to a floating-point number (using reference)
void modifyValue(double& val, double amount) {
    val += amount;
}

// 3. Overloaded function: Modify integer value using a pointer parameter
void modifyValue(int* ptr, int newValue) {
    if (ptr != nullptr) { // Safety check
        *ptr = newValue;   // Dereference pointer to modify value at memory location
    }
}

int main() {
    // --- 1. INTEGER MODIFICATION ---
    int intVal, intAdd;
    cout << "--- 1. Modify Integer (Add Value) ---\n";
    cout << "Enter an initial integer value: ";
    cin >> intVal;
    cout << "Enter value to add: ";
    cin >> intAdd;

    cout << "Before modification: " << intVal << "\n";
    // Call the overloaded function to modify the integer value
    modifyValue(intVal, intAdd);
    cout << "After modification:  " << intVal << "\n\n";

    // --- 2. FLOATING-POINT MODIFICATION ---
    double doubleVal, doubleAdd;
    cout << "--- 2. Modify Floating-Point (Add Value) ---\n";
    cout << "Enter an initial decimal value: ";
    cin >> doubleVal;
    cout << "Enter value to add: ";
    cin >> doubleAdd;
    
    cout << "Before modification: " << doubleVal << "\n";
    // Call the overloaded function to modify the floating-point value
    modifyValue(doubleVal, doubleAdd);
    cout << "After modification:  " << doubleVal << "\n\n";

    // --- 3. POINTER MODIFICATION ---
    int ptrVal, newIntVal;
    cout << "--- 3. Modify Integer via Pointer ---\n";
    cout << "Enter an initial integer value: ";
    cin >> ptrVal;
    cout << "Enter new replacement value: ";
    cin >> newIntVal;

    cout << "Before modification: " << ptrVal << "\n";
    modifyValue(&ptrVal, newIntVal); // Pass the address of ptrVal
    cout << "After modification:  " << ptrVal << "\n";

    return 0;
}