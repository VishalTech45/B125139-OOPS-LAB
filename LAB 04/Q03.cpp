
#include <iostream>
#include <string>
using namespace std;

class ParkingSlot {
    int slotNumber;
    string car_Number;
    bool isOccupied;
    public:
    // constructor to initialize the ParkingSlot object
    ParkingSlot(int sn, string cn, bool io) {
        slotNumber = sn;
        car_Number = cn;
        isOccupied = io;
    }
    // friend function declaration
    friend void checkSlot(const ParkingSlot &slot);
};

void checkSlot(const ParkingSlot &slot) {
    cout << "--------Parking Slot Details ------------" << endl;
    cout << "Slot Number: " << slot.slotNumber << endl;
    if (slot.isOccupied) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << slot.car_Number << endl;
    } else {
        cout << "Status: Available" << endl;
    }
}

int main(){
    int slotNumber;
    string car_Number;
    bool isOccupied;

    cout << "Enter the slot number: ";
    cin >> slotNumber;
    cin.ignore(); // To consume the newline character after reading slotNumber
    cout << "Enter the vehicle number (if occupied, else leave blank): ";
    getline(cin, car_Number);
    cout << "Is the slot occupied? (1 for Yes, 0 for No): ";
    cin >> isOccupied;
    
    // Create an object of ParkingSlot class and pass it to the friend function checkSlot()
    ParkingSlot slot(slotNumber, car_Number, isOccupied);

    checkSlot(slot); // object of ParkingSlot class is passed to the friend function checkSlot()

    return 0;
}