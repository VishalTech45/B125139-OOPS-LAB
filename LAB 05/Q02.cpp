#include <iostream>
#include <algorithm> // For std::max

// Overloaded function for two integers
int findMax(int a, int b) {
    return std::max(a, b);
}

// Overloaded function for two floating-point numbers
double findMax(double a, double b) {
    return std::max(a, b);
}

// Overloaded function for three integers
int findMax(int a, int b, int c) {
    return std::max({a, b, c});
}

int main() {
    // 1. Compare two integers
    int int1, int2;
    std::cout << "--- Compare Two Integers ---\n";
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    std::cout << "Larger value: " << findMax(int1, int2) << "\n\n";

    // 2. Compare two floating-point numbers
    double float1, float2;
    std::cout << "--- Compare Two Floating-Point Numbers ---\n";
    std::cout << "Enter two decimal numbers: ";
    std::cin >> float1 >> float2;
    std::cout << "Larger value: " << findMax(float1, float2) << "\n\n";

    // 3. Compare three integers
    int int3;
    std::cout << "--- Compare Three Integers ---\n";
    std::cout << "Enter three integers: ";
    std::cin >> int1 >> int2 >> int3;
    std::cout << "Largest value: " << findMax(int1, int2, int3) << "\n";

    return 0;
}