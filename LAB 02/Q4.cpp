#include<iostream>
using namespace std;

class Account{
    int acc_num ;
    char name[50];
    float balance ;

    public:
      void get_detail(){
        cout <<"Enter Account Number: " ;
        cin >> acc_num;
        cout <<"Enter Holder Name:" ;
        cin >> name ;
        cout <<"Enter balance:";
        cin >> balance ;
      }
      void Deposit(){
        int dep_amm ;
        cout <<"\nEnter Deposit Amount:";
        cin >> dep_amm ;
         balance= balance + dep_amm ;

         cout <<"\nDeposit successfully!"<<endl;

         cout <<"\nTotal amount After deposit = "<<balance;
      }
      void Withdraw(){
        int dr_amm ;
        cout <<"\nEnter Withdraw Amount:";
        cin >> dr_amm ;
        if(dr_amm > balance){
          cout <<"Withdraw amount is  more than balance amount" <<endl;
        }else{
         balance= balance - dr_amm ;

         cout <<"\nWithdraw successfully!"<<endl;

         cout <<"\nTotal amount After Withdraw = "<< balance ;
        }
      }

      void updated(){
        cout<<"\n-------Account details-------" ;
        cout <<"\nAccount Number = "<<acc_num;
        cout <<"\nHolder name ="<<name;
        cout <<"\nBalance = "<<balance ;
      }


};


int main(){
    Account a1;

    a1.get_detail();
    a1.Deposit();
    a1.Withdraw();
    a1.updated();
 
    return 0;
}