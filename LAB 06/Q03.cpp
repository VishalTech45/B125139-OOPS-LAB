// Student Marks Comparison
// Create a class Student containing student name and total marks.
// Overload the > operator to compare two Student objects based on their total marks.
// Use the overloaded operator to determine which student has higher marks.
// Condition: The overloaded operator must return a bool value.

#include<iostream>
using namespace std;

class Student{
    string name;
    int marks;
    public:
    Student(string name="Unknown", int marks=0){
        this->name = name;
        this->marks = marks;
    }

    bool operator>(Student s){
        return this->marks > s.marks;
    }
    string getName(){
        return name;
    }

    void display(){
        cout<<name<<" : "<<marks<<endl;
    }
};

int main(){
    Student s1("Vishal", 85);
    Student s2("RIshabh", 90);

    cout<<"Student 1: ";
    s1.display();
    cout<<endl;

    cout<<"Student 2: ";
    s2.display();
    cout<<endl;
    
    cout<<endl;
    cout<<"Comparison result: ";
    if(s1 > s2){
        cout<<s1.getName()<<" has higher marks."<<endl;
    }else{
        cout<<s2.getName()<<" has higher marks."<<endl;
    }

    return 0;
}