#include<iostream>
using namespace std;    

class student{
    int roll_no;
    char name[50];
    float marks ;

public :

    void get_detail() ;
    void display_detail() ;
};

void student::get_detail(){
    cout<<"Enter roll number : ";
    cin>>roll_no;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter marks : ";
    cin>>marks;
}

void student::display_detail(){
    cout<<"-----------------------------------"<<endl;
    cout<<"Student details are : "<<endl;
    cout<<"Roll number : "<<roll_no<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Marks : "<<marks<<endl;
}

int main(){
    student s;
    s.get_detail();
    s.display_detail();
    return 0;
}

 