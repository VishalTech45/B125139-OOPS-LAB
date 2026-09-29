// Negative Value Converter
// Create a class Number containing an integer value.
// Overload the unary - operator so that applying it to an object creates a new object
// containing the negative of its value.
// For example:
// Number n1 = 25;
// Number n2 = -n1;
// n1 = 25
// n2 = -25
// The original object must remain unchanged.

#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int value=0){
        this->value = value;
    }
    Number operator-(){
        Number temp;
        temp.value = -value;
        return temp;
    }

    void display(){
        cout<<value<<endl;
    }
};

int main(){
    Number n1(25);
    Number n2 = -n1;

    cout<<"Original Number: ";
    n1.display();

    cout<<"Negative Number: ";
    n2.display();
     

    return 0;
}