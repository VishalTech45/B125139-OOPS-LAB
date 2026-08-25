#include <iostream>
#include <iomanip>

// Overloaded function for two integer values
int calculate(int a, int b) {
    return a + b;
}

// Overloaded function for three integer values
int calculate(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function for two floating-point values
double calculate(double a, double b) {
    return a + b;
}

int main() {
    // 1. Two integer values
    int int1, int2;
    std::cout << "--- Two Integers ---\n";
    std::cout << "Enter two integers separated by space: ";
    std::cin >> int1 >> int2;
    std::cout << "Result: " << calculate(int1, int2) << "\n\n";

    // 2. Three integer values
    int int3;
    std::cout << "--- Three Integers ---\n";
    std::cout << "Enter three integers separated by space: ";
    std::cin >> int1 >> int2 >> int3;
    std::cout << "Result: " << calculate(int1, int2, int3) << "\n\n";

    // 3. Two floating-point values
    double float1, float2;
    std::cout << "--- Two Floating-Point Numbers ---\n";
    std::cout << "Enter two decimal numbers separated by space: ";
    std::cin >> float1 >> float2;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Result: " << calculate(float1, float2) << "\n";

    return 0;
}