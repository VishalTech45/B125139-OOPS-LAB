// Smart Home Device
// Create a class named SmartDevice containing the following private data members:
// • Device Name
// • Device Type
// • Power Status
// Create a class named HomeController and declare it as a friend class of SmartDevice.
// The HomeController class should provide member functions to:
// 1. Display device information.
// 2. Turn the device ON.
// 3. Turn the device OFF.
// 4. Display the current power status.
// Hint: Since HomeController is a friend class, its member functions can directly access and
// modify the private members of SmartDevice.

#include <iostream>
#include <string>
using namespace std;
class SmartDevice {
    string deviceName;
    string deviceType;
    bool powerStatus; // true for ON, false for OFF
    public:
    // constructor to initialize the SmartDevice object
    SmartDevice(string name, string type, bool status) {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }
    // declare HomeController as a friend class
    friend class HomeController;

};

class HomeController {
  public:
    void displayDeviceInfo(  SmartDevice &device) {
        cout << "--------Smart Device Information ------------" << endl;
        cout << "Device Name: " << device.deviceName << endl;
        cout << "Device Type: " << device.deviceType << endl;
        cout << "Power Status: " << (device.powerStatus ? "ON" : "OFF") << endl;
    }

    void turnOn(SmartDevice &device) {
        device.powerStatus = true;
        cout << device.deviceName << " is now ON." << endl;
    }

    void turnOff(SmartDevice &device) {
        device.powerStatus = false;
        cout << device.deviceName << " is now OFF." << endl;
    }

    void displayPowerStatus(const SmartDevice &device) {
        cout << "Current Power Status of " << device.deviceName << ": "
             << (device.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    string name, type;
    bool status;

    cout << "Enter the device name: ";
    getline(cin, name);
    cout << "Enter the device type: ";
    getline(cin, type);
    cout << "Is the device ON? (1 for Yes, 0 for No): ";
    cin >> status;

    SmartDevice device(name, type, status);
    HomeController controller;

    controller.displayDeviceInfo(device);
    controller.turnOn(device);
    controller.displayPowerStatus(device);
    controller.turnOff(device);
    controller.displayPowerStatus(device);

    return 0;
}