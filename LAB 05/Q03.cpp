#include <iostream>
#include <iomanip>
using namespace std;

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
   cout << "--- Integer Array ---\n";
   cout << "Enter the number of elements for the integer array: ";
   cin >> intSize;

    int intArray[intSize];
   cout << "Enter " << intSize << " integer values separated by spaces: ";
    for (int i = 0; i < intSize; ++i) {
       cin >> intArray[i];
    }

   cout << "Total of full integer array: " 
              << calculateTotal(intArray, intSize) << "\n\n";

    // 2. Floating-Point Array Input
    int floatSize;
   cout << "--- Floating-Point Array ---\n";
   cout << "Enter the number of elements for the decimal array: ";
   cin >> floatSize;

    double floatArray[floatSize];
   cout << "Enter " << floatSize << " decimal values separated by spaces: ";
    for (int i = 0; i < floatSize; ++i) {
       cin >> floatArray[i];
    }

   cout <<fixed <<setprecision(2);
   cout << "Total of floating-point array: " 
              << calculateTotal(floatArray, floatSize) << "\n\n";

    // 3. Portion of Integer Array Input
    int portion;
   cout << "--- Portion of Integer Array ---\n";
   cout << "How many elements from the integer array would you like to calculate the total for? ";
   cin >> portion;

   cout << "Total of first " << portion << " elements in integer array: " 
              << calculateTotal(intArray, intSize, portion) << "\n";

    return 0;
}