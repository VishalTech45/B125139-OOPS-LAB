#include<iostream>
using namespace std;

class Calculator{
    int a , b;

    public:
     void  get_data(){
        cout << "Enter Number1 :" ;
        cin >> a ;
        cout << "Enter Number2 :";
        cin >> b ;
     }

     void add(){
        cout << "\nAddition of two Numbers = "<< a+b ;
     }
     void sub(){
        cout << "\nSubtraction of two  Numbers = "<< a-b ;
     }
     void mul(){
        cout << "\nMultiplication of two  Numbers = "<< a*b ;
     }
     void dvd(){
        if(b !=0){
        cout << "\nDivision of two Numbers = "<< a/b ;
        }else{
            cout << "\nDivision  is Not possible change the value of number2 " ;
        }
     }

};

int main(){
    Calculator c ;
    c.get_data();
    c.add();
    c.sub() ;
    c.mul();
    c.dvd();
    return 0 ;
}