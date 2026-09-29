#include <iostream>
#include <iomanip>
using namespace std;

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
    cout << "--- Two Integers ---\n";
    cout << "Enter two integers separated by space: ";
    cin >> int1 >> int2;
    cout << "Result: " << calculate(int1, int2) << "\n\n";

    // 2. Three integer values
    int int3;
    cout << "--- Three Integers ---\n";
    cout << "Enter three integers separated by space: ";
    cin >> int1 >> int2 >> int3;
    cout << "Result: " << calculate(int1, int2, int3) << "\n\n";

    // 3. Two floating-point values
    double float1, float2;
    cout << "--- Two Floating-Point Numbers ---\n";
    cout << "Enter two decimal numbers separated by space: ";
    cin >> float1 >> float2;
    
    cout << fixed << setprecision(2);
    cout << "Result: " << calculate(float1, float2) << "\n";

    return 0;
}