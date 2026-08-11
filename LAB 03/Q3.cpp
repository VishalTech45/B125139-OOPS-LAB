#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    int n ;
    cout<<"Enter Size of Array:";
    cin>> n;

    int* arr = new int[n];

    cout<<"Enter Element of "<<n<<" Size Array :"<<endl ;
    for(int i = 0 ; i< n ; i++){
        cin>> *(arr+i) ; // Pointer access
    }

    int large = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        large = max(large , *(arr+i)) ;
    }

    cout<<"Largest Element of this array:"<<large;

    delete[] arr ;
    arr = nullptr;

    return 0;
}