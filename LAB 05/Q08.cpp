#include <iostream>
#include <cmath>
using namespace std;
// 1. Overloaded function: Count digits in an integer
int count(int number) {
    if (number == 0) return 1;
    
    int digitCount = 0;
    number = abs(number); // Handle negative numbers
    
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
    cout << "--- 1. Count Digits in an Integer ---\n";
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Number of digits in " << num << ": " << count(num) << "\n\n";

    // --- 2. COUNT ELEMENTS IN AN INTEGER ARRAY ---
    int intSize;
    cout << "--- 2. Count Elements in an Integer Array ---\n";
    cout << "Enter the number of elements: ";
    cin >> intSize;

    int intArray[intSize];
    cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; ++i) {
        cin >> intArray[i];
    }
    cout << "Total elements in the array: " << count(intArray, intSize) << "\n\n";

    // --- 3. COUNT CHARACTER OCCURRENCES ---
    int charSize;
    cout << "--- 3. Count Character Occurrences ---\n";
    cout << "Enter the size of the character array: ";
    cin >> charSize;

    char charArray[charSize];
    cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; ++i) {
        cin >> charArray[i];
    }

    char targetChar;
    cout << "Enter character to count: ";
    cin >> targetChar;

    cout << "Occurrences of '" << targetChar << "': "<< count(charArray, charSize, targetChar) << "\n";

    return 0;
}