#include <iostream>
#include <algorithm>  
using namespace std;

// Overloaded function for two integers
int findMax(int a, int b) {
    return max(a, b);
}

// Overloaded function for two floating-point numbers
double findMax(double a, double b) {
    return max(a, b);
}

// Overloaded function for three integers
int findMax(int a, int b, int c) {
    return max({a, b, c});
}

int main() {
    // 1. Compare two integers
    int int1, int2;
    cout << "--- Compare Two Integers ---\n";
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Larger value: " << findMax(int1, int2) << "\n\n";

    // 2. Compare two floating-point numbers
    double float1, float2;
    cout << "--- Compare Two Floating-Point Numbers ---\n";
    cout << "Enter two decimal numbers: ";
    cin >> float1 >> float2;
    cout << "Larger value: " << findMax(float1, float2) << "\n\n";

    // 3. Compare three integers
    int int3;
    cout << "--- Compare Three Integers ---\n";
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;
    cout << "Largest value: " << findMax(int1, int2, int3) << "\n";

    return 0;
}