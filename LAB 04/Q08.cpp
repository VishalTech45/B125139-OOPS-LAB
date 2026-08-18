// Train Seat Status
// Create a class named TrainSeat containing the following private data members:
// • Seat Number
// • Passenger Name
// • Booking Status
// Create a class named TicketChecker and declare it as a friend class of TrainSeat.
// The TicketChecker class should:
// 1. Display the seat details.
// 2. Check whether the seat is booked or available.
// 3. Display the passenger name if the seat is booked.
// Hint: The friend class can directly access the private members of TrainSeat.

#include <iostream>
#include <string>
using namespace std;

class TrainSeat{
    int seatNumber;
    string passengerName;
    bool isBooked;
    public:
    // constructor to initialize the TrainSeat object
    TrainSeat(int sn, string pn, bool ib){
        seatNumber = sn;
        passengerName = pn;
        isBooked = ib;
    }
    // declare TicketChecker as a friend class
    friend class TicketChecker;
};

class TicketChecker{
 public:
    void displaySeatDetails( TrainSeat &seat){
        cout<<"--------Train Seat Details ------------"<<endl;
        cout<<"Seat Number: "<<seat.seatNumber<<endl;
        if(seat.isBooked){
            cout<<"Booking Status: Booked"<<endl;
            cout<<"Passenger Name: "<<seat.passengerName<<endl;
        }else{
            cout<<"Booking Status: Available"<<endl;
        }
    }

    void checkBookingStatus( TrainSeat &seat){
        if(seat.isBooked){
            cout<<"The seat is booked by "<<seat.passengerName<<endl;
        }else{
            cout<<"The seat is available for booking"<<endl;
        }
    }

    void displayPassengerName( TrainSeat &seat){
        if(seat.isBooked){
            cout<<"Passenger Name: "<<seat.passengerName<<endl;
        }else{
            cout<<"The seat is not booked, no passenger name available"<<endl;
        }
    }
};


int main(){
    int seatNumber;
    string passengerName;
    bool isBooked;

    cout << "Enter the seat number: ";
    cin >> seatNumber;
    cin.ignore(); // To consume the newline character after reading seatNumber
    cout << "Enter the passenger name (if booked, else leave blank): ";
    getline(cin, passengerName);
    cout << "Is the seat booked? (1 for Yes, 0 for No): ";
    cin >> isBooked;

    // Create an object of TrainSeat class and pass it to the friend class TicketChecker
    TrainSeat seat(seatNumber, passengerName, isBooked);
    TicketChecker checker;

    checker.displaySeatDetails(seat); // object of TrainSeat class is passed to the friend class TicketChecker
    checker.checkBookingStatus(seat);
    checker.displayPassengerName(seat);

    return 0;
}