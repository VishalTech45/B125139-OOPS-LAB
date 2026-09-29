// Complex Number Subtraction
// Create a class Complex containing real and imaginary parts.
// Overload the - operator to subtract two complex numbers.
// For example:
// C1 = 8 + 5i
// C2 = 3 + 2i
// C1 - C2 = 5 + 3i
// Display the result in a proper complex-number format.

#include<iostream>
using namespace std;

class Complex{
    int real , img ;
    public:  // access specifier
    //Constructor
    Complex(int real=0 , int img=0){
        this->real = real ;
        this->img = img ;
    }

    Complex operator-(Complex c1){
        Complex temp;
        temp.real = real -c1.real ;
        temp.img = img - c1.img ;


        return temp;
    }

    void display(){
        if(img>=0){
             
            cout<<real<<" + "<<img<<"i"<<endl;
        }else{
           
            cout<<real<<" - "<<-img<<"i"<<endl;
        }
        cout<<endl;
    }
};

int main(){
    Complex c1(2,5);
    Complex c2(4,7);

    Complex c3 = c1-c2 ;

    cout<<"Complex Number 1 : "<<endl;
    c1.display();

    cout<<"Complex Number 2 : "<<endl;
    c2.display();

    cout<<"Complex Number 3 : "<<endl;
    c3.display();

    return 0;
}