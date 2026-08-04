#include<iostream>
using namespace std;

class Distance{
    float inche ;
    float feet ;

    public:
      void get_data(){
        cout <<"Enter  Inche: " ;
        cin >> inche ;

        cout <<"Enter feet:";
        cin >> feet ;
      }
     
      void Total_dis(){     
       cout << "Total distance in feet = "<<  inche/12+ feet  ;

      }    
};

int main(){
    Distance d;
    d.get_data();
    d.Total_dis();

    return 0 ;
}