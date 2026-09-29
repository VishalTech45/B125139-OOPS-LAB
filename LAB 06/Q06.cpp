// Counter Increment
// Create a class Counter containing an integer value.
// Overload the increment operator to support both prefix and postfix forms:
// ++c;
// c++;
// Both operations should increase the counter value by 1.
// Display the value before and after each operation.
// Hint: Prefix and postfix increment operators require different function signatures.

#include<iostream>
using namespace std;

class Counter{
    int value;
    public:
    Counter(int value=0){
        this->value = value;
    }
    // Postfix increment operator
    Counter operator++(int){
        Counter temp;
        temp.value = value++;
        return temp;
    }
    //prefix increment operator
    Counter operator++(){
        Counter temp;
        temp.value = ++value;
        return temp;
    }
    void display(){
        cout<<value<<endl;
    }
};

int main(){
    Counter c1(5);

    cout<<"Original Counter: ";
    c1.display();

    cout<<"Postfix Increment: ";
    Counter c2 = c1++;
    c2.display();
    cout<<"Counter after Postfix Increment: ";
    c1.display();

    cout<<"Prefix Increment: ";
    Counter c3 = ++c1;
    c3.display();
    cout<<"Counter after Prefix Increment: ";
    c1.display();

    return 0;
}