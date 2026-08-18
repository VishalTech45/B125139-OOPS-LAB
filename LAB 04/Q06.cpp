 
#include<iostream>
#include<string>
using namespace std ;

class Door{
    int d_no;
    bool lock_status;
    public:
      // constructor to initialize the Door object
      Door(int door_no, bool status){
            d_no = door_no;
            lock_status = status;
        }
        // declare SecuritySystem as a friend class
        friend class SecuritySystem;
};

class SecuritySystem{
    public:
     void checkLockStatus( const Door &door);
};

 void SecuritySystem::checkLockStatus(const Door &door){
      cout<<"Door Number:"<<door.d_no<<endl;
      if(door.lock_status){
         cout<<"Status:Locked"<<endl;
      }
      else{
         cout<<"Status:Unlocked"<<endl;
      }
 }

 int main(){
    int door_no;
    bool status;
    cout<<"Enter the door number: ";
    cin>>door_no;
    cout<<"Enter the lock status (1 for Locked, 0 for Unlocked): ";
    cin>>status;
    Door door(door_no, status);
    SecuritySystem security;

    security.checkLockStatus(door);

    return 0;
 }
