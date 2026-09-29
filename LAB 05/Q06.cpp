#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

// 1. Display single integer
void display(int val) {
    cout << "Integer value: " << val << "\n";
}

// 2. Display single floating-point number
void display(double val) {
    cout << "Floating-point value: " << fixed << setprecision(2) << val << "\n";
}

// 3. Display single character
void display(string val) {
    cout << "Character value: " << val << "\n";
}

// 4. Display all elements of an integer array
void display(const int arr[], int size) {
    cout << "Integer array elements: [ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    cout << "]\n";
}

// 5. Display all elements of a character array
void display(const string arr[], int size) {
    cout << "Character array elements: [ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    cout << "]\n";
}

int main() {
    // --- 1. DISPLAY INTEGER ---
    int intVal;
    cout << "--- Single Integer ---\n";
    cout << "Enter an integer: ";
    cin >> intVal;
    display(intVal);
    cout << "\n";

    // --- 2. DISPLAY FLOATING-POINT NUMBER ---
    double floatVal;
    cout << "--- Single Floating-Point ---\n";
    cout << "Enter a decimal number: ";
    cin >> floatVal;
    display(floatVal);
    cout << "\n";

    // --- 3. DISPLAY CHARACTER ---
    string charVal;
    cout << "--- Single Character ---\n";
    cout << "Enter a single character: ";
    cin >> charVal;
    display(charVal);
    cout << "\n";

    // --- 4. DISPLAY INTEGER ARRAY ---
    int intSize;
    cout << "--- Integer Array ---\n";
    cout << "Enter the size of the integer array: ";
    cin >> intSize;

    int intArray[intSize];
    cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; ++i) {
        cin >> intArray[i];
    }
    display(intArray, intSize);
    cout << "\n";

    // --- 5. DISPLAY CHARACTER ARRAY ---
    int charSize;
    cout << "--- Character Array ---\n";
    cout << "Enter the size of the character array: ";
    cin >> charSize;

    string charArray[charSize];
    cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; ++i) {
        cin >> charArray[i];
    }
    display(charArray, charSize);

    return 0;
}