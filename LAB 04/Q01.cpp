#include<iostream>
#include<string>
using namespace std;


class Dairy{
    string name;
    int no_of_entries;
    string  last_entries;
    public:
     void get_details(){
        cout<<"Enter the name of the dairy: ";
        getline(cin,name);
        cout<<"Enter the number of entries: ";
        cin>>no_of_entries;
        cin.ignore() ; // To consume the newline character after reading no_of_entries
        cout<<"Enter the last entries: ";
         getline(cin, last_entries); // To consume the newline character after reading no_of_entries
     }
     // FREIND FUNCTION DECLARATION
     friend void displayDairy(const  Dairy dairy);
      

};

 void displayDairy(const  Dairy dairy){

    cout<<"\nDetails of the dairy: "<<endl;
    cout<<"Name of the dairy: "<<dairy.name<<endl;
    cout<<"Number of entries: "<<dairy.no_of_entries<<endl;
    cout<<"Last entries: "<<dairy.last_entries <<endl;
      
 }

int main(){
    Dairy dairy;
    dairy.get_details();
    displayDairy(dairy);
    
    return 0;
}
