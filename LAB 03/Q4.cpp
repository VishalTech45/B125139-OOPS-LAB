#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    int n ;
    cout<<"Enter Size of Array:";
    cin>> n;

    int* arr = new int[n] ;
    cout<<"Enter Element of "<<n<<" Size Array :"<<endl ;
    for(int i = 0 ; i< n ; i++){
        cin>> arr[i] ; // Pointer access
    }
    int sum = 0 ;
    for(int i = 0 ;i < n ; i++){
        sum = sum + arr[i] ;
    }

    float avg = sum /n ;

    cout<<"Sum = "<<sum<<endl ;
    cout <<"Average = "<<avg ;

    delete arr ;
    arr = nullptr ;

      cout<<"\nChecking delete ot not:"<<endl;
    if(arr == nullptr){
        cout<<"Memory has been successfully released."<<endl;
    } else{
        cout<<"Menory release failed."<<endl;
    }

    return 0 ;
}