#include <iostream>
#include <iomanip>
#include<string>

// 1. Display single integer
void display(int val) {
    std::cout << "Integer value: " << val << "\n";
}

// 2. Display single floating-point number
void display(double val) {
    std::cout << "Floating-point value: " << std::fixed << std::setprecision(2) << val << "\n";
}

// 3. Display single character
void display(std::string val) {
    std::cout << "Character value: " << val << "\n";
}

// 4. Display all elements of an integer array
void display(const int arr[], int size) {
    std::cout << "Integer array elements: [ ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    std::cout << "]\n";
}

// 5. Display all elements of a character array
void display(const std::string arr[], int size) {
    std::cout << "Character array elements: [ ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    std::cout << "]\n";
}

int main() {
    // --- 1. DISPLAY INTEGER ---
    int intVal;
    std::cout << "--- Single Integer ---\n";
    std::cout << "Enter an integer: ";
    std::cin >> intVal;
    display(intVal);
    std::cout << "\n";

    // --- 2. DISPLAY FLOATING-POINT NUMBER ---
    double floatVal;
    std::cout << "--- Single Floating-Point ---\n";
    std::cout << "Enter a decimal number: ";
    std::cin >> floatVal;
    display(floatVal);
    std::cout << "\n";

    // --- 3. DISPLAY CHARACTER ---
    std::string charVal;
    std::cout << "--- Single Character ---\n";
    std::cout << "Enter a single character: ";
    std::cin >> charVal;
    display(charVal);
    std::cout << "\n";

    // --- 4. DISPLAY INTEGER ARRAY ---
    int intSize;
    std::cout << "--- Integer Array ---\n";
    std::cout << "Enter the size of the integer array: ";
    std::cin >> intSize;

    int intArray[intSize];
    std::cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; ++i) {
        std::cin >> intArray[i];
    }
    display(intArray, intSize);
    std::cout << "\n";

    // --- 5. DISPLAY CHARACTER ARRAY ---
    int charSize;
    std::cout << "--- Character Array ---\n";
    std::cout << "Enter the size of the character array: ";
    std::cin >> charSize;

    std::string charArray[charSize];
    std::cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; ++i) {
        std::cin >> charArray[i];
    }
    display(charArray, charSize);

    return 0;
}