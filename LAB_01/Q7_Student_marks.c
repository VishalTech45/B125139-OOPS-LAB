#include<stdio.h>

struct student{
    int roll_no;
    char name[50];
    float c_lang;
    float  math;
    float phy ;
    float total ;
};

int main(){
    struct student s1 ;
    printf("Enter roll number: ");
    scanf("%d",&s1.roll_no);
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter C Language marks: ");
    scanf("%f",&s1.c_lang);
    printf("Enter Mathematics marks:");
    scanf("%f",&s1.math);
    printf("Enter Physics marks:");
    scanf("%f",&s1.phy);

     s1.total = s1.c_lang + s1.math +s1.phy ;

    printf("\n===================");
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n",s1.roll_no);
    printf("Name: %s\n",s1.name);
    printf("Total marks:%.2f\n" , s1.total) ;
    printf("Average : %.2f ",s1.total/3) ;

}