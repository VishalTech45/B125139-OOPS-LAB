#include<stdio.h>

struct Employee{
    int Employee_id ;
    char name[50];
    float salary ;

};

int main(){
    int n ;
    printf("Enter Number of Employee: ");
    scanf("%d",&n);

    struct  Employee emp[n] ;
    
    printf("Enter Details of %d Employee:\n", n) ;
    for(int i= 0; i < n ;i++){
        printf("Enter Employee Id:");
        scanf("%d",&emp[i].Employee_id) ;
        printf("Enter Name :") ;
        scanf("%s",emp[i].name) ;
        printf("Enter Salary :");
        scanf("%f",&emp[i].salary) ;
    }
    for(int i= 0; i < n ;i++){
        printf("\n======================\n");
        printf("Details of Employee [%d]\n",i+1) ;
        printf("Employee Id :%d\n",emp[i].Employee_id);      
        printf("Name:%s\n",emp[i].name) ;      
        printf("Salary:%.2f",emp[i].salary);
    }
}