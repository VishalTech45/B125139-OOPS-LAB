#include <iostream>
#include <cstring>
using namespace std;

class Product {
private:
    int p_id, qua_av, sold;
    float price;
    char name[50];

public:
    void inp() {
        cout << "Enter Product ID: ";
        cin >> p_id;

        cin.ignore(); // Clear input buffer

        cout << "Enter Product Name: ";
        cin.getline(name, 50);

        cout << "Enter Available Quantity: ";
        cin >> qua_av;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void display() {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID         : " << p_id << endl;
        cout << "Product Name       : " << name << endl;
        cout << "Available Quantity : " << qua_av << endl;
        cout << "Price per Unit     : " << price << endl;
    }

    void tot_inv_value() {
        cout << "Current Inventory Value = " << qua_av * price << endl;
    }

    void sell() {
        cout << "\nEnter Number of Items Sold: ";
        cin >> sold;

        if (sold < 0) {
            cout << "Invalid quantity entered." << endl;
        }
        else if (sold > qua_av) {
            cout << "Quantity sold cannot be greater than available stock." << endl;
        }
        else {
            qua_av -= sold;
            cout << "Sale Successful!" << endl;
            cout << "Remaining Stock: " << qua_av << endl;
            tot_inv_value();
        }
    }
};

int main() {
    Product p;

    p.inp();
    p.display();

    p.sell();

    cout << "\nUpdated Product Details:" << endl;
    p.display();

    return 0;
}
