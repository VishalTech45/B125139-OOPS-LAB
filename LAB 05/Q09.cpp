#include <iostream>
#include <algorithm> // For std::max

// 1. Overloaded function: Maximum between two integers (by value)
int findMax(int a, int b) {
    return (a > b) ? a : b; // return conditional maximum value
}

// 2. Overloaded function: Maximum between two values accessed through pointers
int findMax(const int* ptr1, const int* ptr2) {
    if (!ptr1 || !ptr2) return 0; // Null pointer check
    return (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
}

// 3. Overloaded function: Maximum element in an integer array using pointer and size
int findMax(const int* arrPtr, int size) {
    if (!arrPtr || size <= 0) return 0;

    int maxVal = *arrPtr; // Initialize with the first element
    for (int i = 1; i < size; ++i) {
        if (*(arrPtr + i) > maxVal) { // Accessing array elements via pointer arithmetic
            maxVal = *(arrPtr + i);
        }
    }
    return maxVal;
}

int main() {
    // --- 1. MAXIMUM BETWEEN TWO INTEGERS ---
    int int1, int2;
    std::cout << "--- 1. Maximum Between Two Integers ---\n";
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    std::cout << "Maximum value: " << findMax(int1, int2) << "\n\n";

    // --- 2. MAXIMUM BETWEEN TWO VALUES VIA POINTERS ---
    int val1, val2;
    std::cout << "--- 2. Maximum Between Two Pointer Values ---\n";
    std::cout << "Enter two integers: ";
    std::cin >> val1 >> val2;
    std::cout << "Maximum value: " << findMax(&val1, &val2) << "\n\n";

    // --- 3. MAXIMUM IN AN ARRAY USING POINTER AND SIZE ---
    int size;
    std::cout << "--- 3. Maximum in Array (Pointer + Size) ---\n";
    std::cout << "Enter array size: ";
    std::cin >> size;

    if (size > 0) {
        int arr[size];
        std::cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
        // Array name 'arr' decays into a pointer to its first element
        std::cout << "Maximum element: " << findMax(arr, size) << "\n";
    } else {
        std::cout << "Invalid array size.\n";
    }

    return 0;
}