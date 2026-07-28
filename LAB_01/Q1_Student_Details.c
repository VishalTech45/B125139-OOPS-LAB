#include<stdio.h>

struct student{
    int roll_no;
    char name[50];
    int age;
    float cgpa;
};

int main(){
    struct student s1 ;
    printf("Enter roll number: ");
    scanf("%d",&s1.roll_no);
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    printf("Enter cgpa:");
    scanf("%f",&s1.cgpa);

    printf("\n====================") ;
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n",s1.roll_no);
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("CGPA: %.2f\n",s1.cgpa);

    return 0 ;

}