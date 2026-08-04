#include<iostream>
using namespace std;

class employee{
        int emp_id;
        char name[50];
        float b_salary,hra,da,gs;
    public:
       void get_detail(){
        cout <<"Enter Employee id: " ;
        cin >> emp_id;
        cout <<"Enter Employee Name:" ;
        cin >> name ;
        cout <<"Enter balance:";
        cin >> b_salary ;
      }
        void sal(){
            hra=0.2*b_salary;
            da=0.1*b_salary;
            gs=b_salary+hra+da;
        }
        void display(){
            cout<<"Details of salary."<<endl;
            cout<<"\nBasic Salary: "<<b_salary<<"\nHRA "<<hra<<"\nDA: "<<da<<"\nGross Salary: "<<gs<<endl;
        }
};

int main(){
    employee e;
    float ar,per;
    e.get_detail();
    e.sal();
    e.display();
    return 0;
}