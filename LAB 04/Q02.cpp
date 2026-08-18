// Mobile Phone Settings
// Create a class named Mobile containing the following private data members:
// • Brand
// • Model
// • Battery Percentage
// Write a friend function named checkBattery() that accesses the private battery percent-
// age and displays:
// • “Battery Low” if the battery percentage is below 20%.
// • “Battery Normal” otherwise.
// The function should also display the mobile details.
// Hint: The friend function can directly access the private members of the Mobile class.

#include <iostream>
#include <string>
using namespace std;

class Mobile {
    string brand;
    string model;
    int batteryPercentage;
public:
    // constructor to initialize the Mobile object
    Mobile(string b, string m, int bp){
        brand = b;
        model = m;
        batteryPercentage = bp;
    }

    // friend function declaration
    friend void checkBattery(const Mobile &mobile);
};

void checkBattery(const Mobile &mobile) {
    cout << "Mobile Details:" << endl;
    cout << "Brand: " << mobile.brand << endl;
    cout << "Model: " << mobile.model << endl;
    cout << "Battery Percentage: " << mobile.batteryPercentage << "%" << endl;

    if (mobile.batteryPercentage < 20) {
        cout << "Battery Low" << endl;
    } else {
        cout << "Battery Normal" << endl;
    }
}

int main(){
    string brand,model;
    int batteryPercentage;

    cout << "Enter the brand of the mobile: ";
    getline(cin, brand);
    cout << "Enter the model of the mobile: ";
    getline(cin, model);
    cout << "Enter the battery percentage: ";
    cin >> batteryPercentage;


    Mobile mobile(brand, model, batteryPercentage);
    checkBattery(mobile);

    return 0;
}