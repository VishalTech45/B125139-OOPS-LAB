#include<stdio.h>

struct Employee{
    int Employee_id ;
    char name[50];
    float salary ;
};

int max_salary( struct Employee emp[], int n){
    int maxi = 0 , t =0 ;
  for( int i =0 ; i < n;i++){
       if(emp[i].salary >maxi){
        maxi =emp[i].salary ;
        t=i ;
       }      
   }
   return t ;
}

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
     
      int p = max_salary(emp, n) ; 
        printf("Employee Id :%d\n",emp[p].Employee_id);      
        printf("Name:%s\n",emp[p].name) ;      
        printf("Salary:%.2f",emp[p].salary);

    return 0 ;    
    
}