#include<stdio.h>

struct Employee{
    int Employee_Id;
    char name[50];
    float salary;

} ;

int main(){
    int n ;
    printf("Enter Number of Employee: ");
    scanf("%d",&n);

    struct Employee emp[n] ;
    
    for(int i = 0 ; i <n ;i++){
    printf("Enter Employee Id : ");
    scanf("%d",&emp[i].Employee_Id);
    printf("Enter name: "); 
    scanf("%s",emp[i].name);
    printf("Enter salary: ");
    scanf("%f",&emp[i].salary);

    }
   
  for(int i =0 ; i < n ;i++){
    printf("\n======================") ;
    printf("\nEmployee Details\n");
    printf("Employee Id: %d\n",emp[i].Employee_Id);
    printf("Name: %s\n",emp[i].name);
    printf("Salary: %.2f\n",emp[i].salary);
    }

    return 0;
}