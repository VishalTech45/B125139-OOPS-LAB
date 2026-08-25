#include <iostream>
#include <cmath>

// 1. Overloaded function: Count digits in an integer
int count(int number) {
    if (number == 0) return 1;
    
    int digitCount = 0;
    number = std::abs(number); // Handle negative numbers
    
    while (number > 0) {
        number /= 10;
        digitCount++;
    }
    return digitCount;
}

// 2. Overloaded function: Count total elements in an integer array
// Since array size must be passed in C++, this function validates and returns the element count.
int count(const int arr[], int size) {
    return size;
}

// 3. Overloaded function: Count occurrences of a character in a character array
int count(const char arr[], int size, char target) {
    int occurrences = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            occurrences++;
        }
    }
    return occurrences;
}

int main() {
    // --- 1. COUNT DIGITS IN AN INTEGER ---
    int num;
    std::cout << "--- 1. Count Digits in an Integer ---\n";
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Number of digits in " << num << ": " << count(num) << "\n\n";

    // --- 2. COUNT ELEMENTS IN AN INTEGER ARRAY ---
    int intSize;
    std::cout << "--- 2. Count Elements in an Integer Array ---\n";
    std::cout << "Enter the number of elements: ";
    std::cin >> intSize;

    int intArray[intSize];
    std::cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; ++i) {
        std::cin >> intArray[i];
    }
    std::cout << "Total elements in the array: " << count(intArray, intSize) << "\n\n";

    // --- 3. COUNT CHARACTER OCCURRENCES ---
    int charSize;
    std::cout << "--- 3. Count Character Occurrences ---\n";
    std::cout << "Enter the size of the character array: ";
    std::cin >> charSize;

    char charArray[charSize];
    std::cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; ++i) {
        std::cin >> charArray[i];
    }

    char targetChar;
    std::cout << "Enter character to count: ";
    std::cin >> targetChar;

    std::cout << "Occurrences of '" << targetChar << "': "<< count(charArray, charSize, targetChar) << "\n";

    return 0;
}