#include <iostream>
#include <iomanip> // used for std::setprecision to control decimal places in floating-point output

// 1. Overloaded function: Compare two integers and display the larger value
void compare(int a, int b) {
    if (a == b) {
        std::cout << "Both integers are equal (" << a << ").\n";
    } else {
        int larger = (a > b) ? a : b;
        std::cout << "The larger integer is: " << larger << "\n";
    }
}

// 2. Overloaded function: Compare two floating-point numbers and display the larger value
void compare(double a, double b) {
    if (a == b) {
        std::cout << "Both floating-point numbers are equal (" << a << ").\n";
    } else {
        double larger = (a > b) ? a : b;
        std::cout << "The larger floating-point number is: " << larger << "\n";
    }
}

// 3. Overloaded function: Compare two integer arrays of equal size
void compare(const int arr1[], const int arr2[], int size) {
    bool identical = true;

    for (int i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }

    if (identical) {
        std::cout << "Result: The two arrays contain IDENTICAL elements.\n";
    } else {
        std::cout << "Result: The two arrays do NOT contain identical elements.\n";
    }
}

int main() {
    // --- 1. COMPARE TWO INTEGERS ---
    int int1, int2;
    std::cout << "--- 1. Compare Two Integers ---\n";
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    compare(int1, int2);
    std::cout << "\n";

    // --- 2. COMPARE TWO FLOATING-POINT NUMBERS ---
    double float1, float2;
    std::cout << "--- 2. Compare Two Floating-Point Numbers ---\n";
    std::cout << "Enter two decimal numbers: ";
    std::cin >> float1 >> float2;
    std::cout << std::fixed << std::setprecision(2);
    compare(float1, float2);
    std::cout << "\n";

    // --- 3. COMPARE TWO INTEGER ARRAYS ---
    int arraySize;
    std::cout << "--- 3. Compare Two Integer Arrays ---\n";
    std::cout << "Enter the size for both arrays: ";
    std::cin >> arraySize;

    int arr1[arraySize];
    int arr2[arraySize];

    std::cout << "Enter " << arraySize << " integers for Array 1: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter " << arraySize << " integers for Array 2: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> arr2[i];
    }

    compare(arr1, arr2, arraySize);

    return 0;
}