#include <iostream>
#include<string>

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
int searchElement(const std::string arr[], int size, std::string target) {
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
    std::cout << "--- Integer Array Search ---\n";
    std::cout << "Enter the size of the integer array: ";
    std::cin >> intSize;

    int intArray[intSize];
    std::cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; ++i) {
        std::cin >> intArray[i];
    }

    int intTarget;
    std::cout << "Enter the integer to search for: ";
    std::cin >> intTarget;

    int intPos = searchElement(intArray, intSize, intTarget);
    if (intPos != -1) {
        std::cout << "Element found at index: " << intPos << " (Position " << intPos + 1 << ")\n\n";
    } else {
        std::cout << "Element not found in the array.\n\n";
    }

    // --- 2. SEARCH IN CHARACTER ARRAY ---
    int charSize;
    std::cout << "--- Character Array Search ---\n";
    std::cout << "Enter the size of the character array: ";
    std::cin >> charSize;

    std::string charArray[charSize];
    std::cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; ++i) {
        std::cin >> charArray[i];
    }

    std::string charTarget;
    std::cout << "Enter the character to search for: ";
    std::cin >> charTarget;

    int charPos = searchElement(charArray, charSize, charTarget);
    if (charPos != -1) {
        std::cout << "Character found at index: " << charPos << " (Position " << charPos + 1 << ")\n\n";
    } else {
        std::cout << "Character not found in the array.\n\n";
    }

    // --- 3. SEARCH WITHIN A RANGE OF THE INTEGER ARRAY ---
    std::cout << "--- Range Search in Integer Array ---\n";
    int startIdx, endIdx;
    std::cout << "Enter start index and end index (0 to " << intSize - 1 << "): ";
    std::cin >> startIdx >> endIdx;

    std::cout << "Enter integer to search within range [" << startIdx << " to " << endIdx << "]: ";
    std::cin >> intTarget;

    int rangePos = searchElement(intArray, intSize, intTarget, startIdx, endIdx);
    if (rangePos != -1) {
        std::cout << "Element found at index: " << rangePos << " (Position " << rangePos + 1 << ")\n";
    } else {
        std::cout << "Element not found within the specified index range.\n";
    }

    return 0;
}