#include<iostream>
#include<string>
using namespace std;


class Diary{
    string name;
    int no_of_entries;
    string  last_entries;
    public:
     void get_details(){
        cout<<"Enter the name of the diary: ";
        getline(cin,name);
        cout<<"Enter the number of entries: ";
        cin>>no_of_entries;
        cin.ignore() ; // To consume the newline character after reading no_of_entries
        cout<<"Enter the last entries: ";
         getline(cin, last_entries); // To consume the newline character after reading no_of_entries
     }
     // FREIND FUNCTION DECLARATION
     friend void displayDiary(const  Diary &diary);
      

};

 void displayDiary(const  Diary &diary){

    cout<<"\nDetails of the diary: "<<endl;
    cout<<"Name of the diary: "<<diary.name<<endl;
    cout<<"Number of entries: "<<diary.no_of_entries<<endl;
    cout<<"Last entries: "<<diary.last_entries <<endl;
      
 }

int main(){
    Diary diary;
    diary.get_details();
    displayDiary(diary);
    
    return 0;
}
