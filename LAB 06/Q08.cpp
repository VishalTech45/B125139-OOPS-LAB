// Inventory Combination
// Create a class Item containing item name, price, and quantity.
// Overload the + operator to combine two Item objects.
// If both objects represent the same item and have the same price, return a new object
// containing the combined quantity.
// If the items are different, display an appropriate message.
// Condition: The original objects must not be modified.

#include <iostream>
#include <string>
using namespace std;

class Item {
    string name;
    float price;
    int quantity;

public:
    Item(string n = "", float p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item it ) {
        if (name == it .name && price == it .price) {
            return Item(name, price, quantity + it.quantity);
        }

        cout << "Items are different. Cannot combine." << endl;
        return *this; 
    }

    void display() {
        cout << "Item: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 8);

    Item i3 = i1 + i2;

    cout << "Combined Item:" << endl;
    i3.display();

    cout << "\nOriginal Item 1:" << endl;
    i1.display();

    cout << "\nOriginal Item 2:" << endl;
    i2.display();

    return 0;
}

