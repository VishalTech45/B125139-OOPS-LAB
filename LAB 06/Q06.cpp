// Grocery Price Scanner
// A grocery store stores the prices of 7 products.
// Write a function that receives:
// • A pointer to the first price.
// • The number of products.
// Using pointer traversal, find and display the highest price.
// Condition: Do not use array indexing inside the function.

#include<iostream>
using namespace std ;

void func(int *ptr , int no_of_prod){
   int high_price =INT_MIN ;
    for(int i = 0 ; i < no_of_prod ;i++){
         if(high_price< *(ptr + i)){
            high_price = *(ptr + i) ;
         }
    }
    cout<<"\nHighest Price = "<<high_price ;
}

int main(){
    int arr[7] ={20,40,100,80,99,60,120} ;
    int *ptr = arr;

    cout<<"Price of products:";
    for(int i = 0 ; i<7 ; i++){
        cout<<*(ptr + i)<<" " ;
    }
   
    func(arr , 7);

    return 0 ;
}