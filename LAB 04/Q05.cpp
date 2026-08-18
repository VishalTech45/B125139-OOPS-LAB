
#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
    int orderID;
    string foodItem;
    int quantity;
    float price;
    public:
    // constructor to initialize the FoodOrder object
    FoodOrder(int id , string fi,int qty, float pr) {
        orderID = id;
        foodItem = fi;
        quantity = qty;
        price = pr;
    }

    friend void calculateBill(const FoodOrder &order);
};
// friend function definition with object of FoodOrder class as parameter
void calculateBill(const FoodOrder &order) {
    float totalBill = order.quantity * order.price;
    cout << "--------Food Order Details ------------" << endl;
    cout << "Order ID: " << order.orderID << endl;
    cout << "Food Item: " << order.foodItem << endl;
    cout << "Quantity: " << order.quantity << endl;
    cout << "Price per item: Rs." << order.price << endl;
    cout << "Total Bill: Rs." << totalBill << endl;
}

int main(){
    int orderID, quantity;
    string foodItem;
    float price;

    cout << "Enter the order ID: ";
    cin >> orderID;
    cin.ignore(); // To consume the newline character after reading orderID
    cout << "Enter the food item: ";
    getline(cin, foodItem);
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << "Enter the price per item: ";
    cin >> price;

    // Create an object of FoodOrder class and pass it to the friend function calculateBill()
    FoodOrder order(orderID, foodItem, quantity, price);

    calculateBill(order); // object of FoodOrder class is passed to the friend function calculateBill()

    return 0;
}