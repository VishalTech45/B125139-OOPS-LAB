#include<stdio.h>

struct Distance{
   float inche ;
   float feet ;
   float conv ;
   
} d1 ;

int main(){
    printf("Enter Inches : ");
    scanf("%f",&d1.inche);
    printf("Enter feet:");
    scanf("%f",&d1.feet);
    
    printf("Total Distance in :%.2f",  (d1.inche / 12) + d1.feet);  
    return 0;
}