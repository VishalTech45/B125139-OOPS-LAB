#include <iostream>
#include <iomanip> // For std::setprecision to control decimal places in floating-point output

// 1. Two integers
double process(int a, int b) {
    return (a + b) / 2.0;
}

// 2. An integer and a floating-point value
double process(int a, double b) {
    return (a + b) / 2.0;
}

// 3. Two floating-point values
double process(double a, double b) {
    return (a + b) / 2.0;
}

// 4. An integer array and its size
double process(const int arr[], int size) {
    if (size <= 0) return 0.0;
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

// 5. Two integer pointers
double process(const int* ptr1, const int* ptr2) {
    if (!ptr1 || !ptr2) return 0.0;
    return (*ptr1 + *ptr2) / 2.0;
}

int main() {
    std::cout << std::fixed << std::setprecision(2);

    // 1. Two integers
    int i1, i2;
    std::cout << "--- 1. Two Integers ---\n";
    std::cout << "Enter two integers: ";
    std::cin >> i1 >> i2;
    std::cout << "Average: " << process(i1, i2) << "\n\n";

    // 2. An integer and a floating-point value
    int iVal;
    double dVal;
    std::cout << "--- 2. Integer and Floating-Point ---\n";
    std::cout << "Enter an integer and a decimal: ";
    std::cin >> iVal >> dVal;
    std::cout << "Average: " << process(iVal, dVal) << "\n\n";

    // 3. Two floating-point values
    double d1, d2;
    std::cout << "--- 3. Two Floating-Point Numbers ---\n";
    std::cout << "Enter two decimals: ";
    std::cin >> d1 >> d2;
    std::cout << "Average: " << process(d1, d2) << "\n\n";

    // 4. An integer array and its size
    int size;
    std::cout << "--- 4. Integer Array and Size ---\n";
    std::cout << "Enter array size: ";
    std::cin >> size;
    if (size > 0) {
        int arr[size];
        std::cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
        std::cout << "Array Average: " << process(arr, size) << "\n\n";
    } else {
        std::cout << "Invalid size.\n\n";
    }

    // 5. Two integer pointers
    int pVal1, pVal2;
    std::cout << "--- 5. Two Integer Pointers ---\n";
    std::cout << "Enter two integers: ";
    std::cin >> pVal1 >> pVal2;
    std::cout << "Average via pointers (&a, &b): " << process(&pVal1, &pVal2) << "\n";

    return 0;
}