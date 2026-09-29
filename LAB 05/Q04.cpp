#include <iostream>
#include<string>
using namespace std;

// 1. Overloaded function: Search for an integer in an integer array
int searchElement(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return index (0-based)
        }
    }
    return -1; // Not found
}

// 2. Overloaded function: Search for a character in a character array
int searchElement(const string arr[], int size, string target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// 3. Overloaded function: Search for an integer within a specific range [startIndex, endIndex]
int searchElement(const int arr[], int fullSize, int target, int startIndex, int endIndex) {
    // Validate boundaries
    if (startIndex < 0) startIndex = 0;
    if (endIndex >= fullSize) endIndex = fullSize - 1;

    for (int i = startIndex; i <= endIndex; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    // --- 1. SEARCH IN INTEGER ARRAY ---
    int intSize;
    cout << "--- Integer Array Search ---\n";
    cout << "Enter the size of the integer array: ";
    cin >> intSize;

    int intArray[intSize];
    cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; ++i) {
        cin >> intArray[i];
    }

    int intTarget;
    cout << "Enter the integer to search for: ";
    cin >> intTarget;

    int intPos = searchElement(intArray, intSize, intTarget);
    if (intPos != -1) {
        cout << "Element found at index: " << intPos << " (Position " << intPos + 1 << ")\n\n";
    } else {
        cout << "Element not found in the array.\n\n";
    }

    // --- 2. SEARCH IN CHARACTER ARRAY ---
    int charSize;
    cout << "--- Character Array Search ---\n";
    cout << "Enter the size of the character array: ";
    cin >> charSize;

    string charArray[charSize];
    cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; ++i) {
        cin >> charArray[i];
    }

    string charTarget;
    cout << "Enter the character to search for: ";
    cin >> charTarget;

    int charPos = searchElement(charArray, charSize, charTarget);
    if (charPos != -1) {
        cout << "Character found at index: " << charPos << " (Position " << charPos + 1 << ")\n\n";
    } else {
        cout << "Character not found in the array.\n\n";
    }

    // --- 3. SEARCH WITHIN A RANGE OF THE INTEGER ARRAY ---
    cout << "--- Range Search in Integer Array ---\n";
    int startIdx, endIdx;
    cout << "Enter start index and end index (0 to " << intSize - 1 << "): ";
    cin >> startIdx >> endIdx;

    cout << "Enter integer to search within range [" << startIdx << " to " << endIdx << "]: ";
    cin >> intTarget;

    int rangePos = searchElement(intArray, intSize, intTarget, startIdx, endIdx);
    if (rangePos != -1) {
        cout << "Element found at index: " << rangePos << " (Position " << rangePos + 1 << ")\n";
    } else {
        cout << "Element not found within the specified index range.\n";
    }

    return 0;
}