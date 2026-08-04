#include<stdio.h>

struct product{
    int proid;
    char name[50];
    float price;
    int quantity;
    float cost ;
} P1;

int main(){
    printf("Enter product Id : ");
    scanf("%d",&P1.proid);
    printf("Enter name: "); 
    scanf("%s",P1.name);
    printf("Enter price: ");
    scanf("%f",&P1.price);
    printf("Enter quantity: ");
    scanf("%d",&P1.quantity);
    P1.cost =  P1.price * P1.quantity ;

    printf("\nThe Cost is %.2f" ,P1.cost);
    return 0;
}