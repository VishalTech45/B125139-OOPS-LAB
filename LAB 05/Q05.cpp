#include <iostream>
#include <iomanip> // For std::setprecision
//Std::setprecision is used to control the number of decimal places displayed for floating-point numbers.
// It is part of the <iomanip> header, which provides facilities for manipulating input and output formatting in C++.

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
    std::cout << "--- 1. Modify Integer (Add Value) ---\n";
    std::cout << "Enter an initial integer value: ";
    std::cin >> intVal;
    std::cout << "Enter value to add: ";
    std::cin >> intAdd;

    std::cout << "Before modification: " << intVal << "\n";
    // Call the overloaded function to modify the integer value
    modifyValue(intVal, intAdd);
    std::cout << "After modification:  " << intVal << "\n\n";

    // --- 2. FLOATING-POINT MODIFICATION ---
    double doubleVal, doubleAdd;
    std::cout << "--- 2. Modify Floating-Point (Add Value) ---\n";
    std::cout << "Enter an initial decimal value: ";
    std::cin >> doubleVal;
    std::cout << "Enter value to add: ";
    std::cin >> doubleAdd;
     
    // Set precision for floating-point output
    // fixed: Use fixed-point notation (no scientific notation)
    // setprecision(2): Display 2 digits after the decimal point
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Before modification: " << doubleVal << "\n";
    // Call the overloaded function to modify the floating-point value
    modifyValue(doubleVal, doubleAdd);
    std::cout << "After modification:  " << doubleVal << "\n\n";

    // --- 3. POINTER MODIFICATION ---
    int ptrVal, newIntVal;
    std::cout << "--- 3. Modify Integer via Pointer ---\n";
    std::cout << "Enter an initial integer value: ";
    std::cin >> ptrVal;
    std::cout << "Enter new replacement value: ";
    std::cin >> newIntVal;

    std::cout << "Before modification: " << ptrVal << "\n";
    modifyValue(&ptrVal, newIntVal); // Pass the address of ptrVal
    std::cout << "After modification:  " << ptrVal << "\n";

    return 0;
}