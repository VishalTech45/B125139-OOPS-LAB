#include <iostream>
#include <iomanip>

// Overloaded function for an entire integer array
int calculateTotal(const int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

// Overloaded function for an entire floating-point array
double calculateTotal(const double arr[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

// Overloaded function for a portion of an integer array
int calculateTotal(const int arr[], int fullSize, int elementsToConsider) {
    if (elementsToConsider > fullSize) {
        elementsToConsider = fullSize; // Prevent reading past array boundaries
    }
    
    int total = 0;
    for (int i = 0; i < elementsToConsider; ++i) {
        total += arr[i];
    }
    return total;
}

int main() {
    // 1. Integer Array Input
    int intSize;
    std::cout << "--- Integer Array ---\n";
    std::cout << "Enter the number of elements for the integer array: ";
    std::cin >> intSize;

    int intArray[intSize];
    std::cout << "Enter " << intSize << " integer values separated by spaces: ";
    for (int i = 0; i < intSize; ++i) {
        std::cin >> intArray[i];
    }

    std::cout << "Total of full integer array: " 
              << calculateTotal(intArray, intSize) << "\n\n";

    // 2. Floating-Point Array Input
    int floatSize;
    std::cout << "--- Floating-Point Array ---\n";
    std::cout << "Enter the number of elements for the decimal array: ";
    std::cin >> floatSize;

    double floatArray[floatSize];
    std::cout << "Enter " << floatSize << " decimal values separated by spaces: ";
    for (int i = 0; i < floatSize; ++i) {
        std::cin >> floatArray[i];
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total of floating-point array: " 
              << calculateTotal(floatArray, floatSize) << "\n\n";

    // 3. Portion of Integer Array Input
    int portion;
    std::cout << "--- Portion of Integer Array ---\n";
    std::cout << "How many elements from the integer array would you like to calculate the total for? ";
    std::cin >> portion;

    std::cout << "Total of first " << portion << " elements in integer array: " 
              << calculateTotal(intArray, intSize, portion) << "\n";

    return 0;
}