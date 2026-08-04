#include<iostream>
using namespace std;

class Rectangle{
    float  length ;
    float breadth ;
 public:
   void rarea();
 

};

void Rectangle::rarea(){
    cout << "Enter length:";
    cin >>length ;

    cout<<"Enter Breadth : ";
    cin >> breadth ;
    
    cout <<"The area of Rectangle =" << length*breadth <<endl ;
    cout <<"The Perimeter of Rectangle = " << (2*(length+breadth)) ;

}
int main(){

    Rectangle r;
    r.rarea();
    return 0;
}