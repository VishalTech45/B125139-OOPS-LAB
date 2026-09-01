// Digital Wallet Balance
// A digital wallet stores the current balance of a user.
// Create a pointer pointing to the balance. Using the pointer:
// 1. Display the current balance.
// 2. Add a specified amount.
// 3. Deduct a specified amount.
// 4. Display the final balance.

#include <iostream>
using namespace std;

 void display_Balance(int* ptr) {
    cout << "Current balance: " << *ptr << endl;
 }

 void add_amount(int* ptr , int amount) {
    *ptr += amount;  // Add the specified amount using the pointer
    cout << "Amount added: " << amount << endl;
    cout << "Amount after Addition of "<<amount <<" = "<<*ptr <<endl;
 }

 void deduct_amount(int* ptr , int amount) {
    *ptr -= amount;  // Deduct the specified amount using the pointer
    cout << "Amount deducted: " << amount << endl;
    cout<<"Amount After deduction of "<<amount<<" = "<< *ptr <<endl;
 }

 int main(){
    
    int bal = 1000;  // Initial balance
    int* ptr = &bal; // Pointer to the balance varible
     
    //call the function to display the balance
    display_Balance(ptr);


    int add;
    cout << "Enter the amount to add: ";
    cin >> add;
    // call the function to add the amount
    add_amount(ptr, add);

    int deduct;
    cout << "Enter the amount to deduct: ";
    cin >> deduct;
    // call the function to deduct the amount
    deduct_amount(ptr, deduct);

    cout<<"Final balance: " << *ptr << endl;

    return 0;
 }