#include<iostream>
#include<string>
using namespace std ;

class student{
    int roll_no ;
    string name  ;
    float marks;
     
    public:
      void get_details(){
        cout<<"Enter Roll No : " ;
        cin>>roll_no;
        cin.ignore() ;
        cout<<"Enter Name : ";
        getline(cin , name);

        cout<<"Enter Marks :";
        cin>> marks ;
      }

        void displayDetails() const {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name       : " << name << endl;
        cout << "Marks      : " << marks << endl;
       }
};


int main(){

    student* studentptr = new student() ;

    studentptr->get_details();
    studentptr->displayDetails() ;

    delete studentptr ;
    studentptr = nullptr ;

     cout<<"\nChecking delete ot not:"<<endl;
    if(studentptr == nullptr){
        cout<<"Memory has been successfully released."<<endl;
    } else{
        cout<<"Menory release failed."<<endl;
    }

  return  0 ;
}