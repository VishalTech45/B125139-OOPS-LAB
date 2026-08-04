#include<stdio.h>

struct Book{
   int Book_id ;
   char Title[100];
   char Author_name[50];
   float price;
} b1 ;

int main(){
    printf("Enter Book Id : ");
    scanf("%d",&b1.Book_id);
    printf("Enter Title:");
    scanf("%s",b1.Title);
    printf("Enter Author name : ");
    scanf("%s",b1.Author_name);
    printf("Enter Price:");
    scanf("%f",&b1.price);

    printf("\n========================");
    printf("\nBook Details:\n");
    printf("Book Id: %d\n",b1.Book_id);
    printf("Title: %s\n",b1.Title);
    printf("Author Name: %s\n",b1.Author_name);
    printf("Price: %.2f\n",b1.price);

    return 0;
}
