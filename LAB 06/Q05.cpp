// Time Addition
// Create a class Time containing hours and minutes.
// Overload the + operator to add two Time objects.
// If the total number of minutes becomes 60 or more, convert the excess minutes into hours.
// For example:
// Time 1: 4 hours 45 minutes
// Time 2: 2 hours 30 minutes
// Result: 7 hours 15 minutes

#include<iostream>
using namespace std;

class Time{
    int hrs ,min;
    public:
    //constructor
    Time(int hrs=0 ,int min = 0){
        this->hrs = hrs ;
        this->min = min ;
    }
    Time operator+(Time t1){
        Time temp;
        temp.hrs = hrs + t1.hrs ;
        temp.min = min + t1.min ;

        if(temp.min>=60){
            temp.hrs +=temp.min/60;
            temp.min %=60;
        }

        return temp;
    }
    void display(){
        cout<<hrs<<" hours "<<min<<" minutes"<<endl;
    }

};

int main(){
    Time t1(4,45);
    Time t2(2,30);

    Time t3 = t1+t2;

    cout<<"Time 1: ";
    t1.display();

    cout<<"Time 2: ";
    t2.display();

    cout<<"Result: ";
    t3.display();

    return 0;
}