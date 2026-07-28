#include<stdio.h>


struct  Students
{
    int roll_No ;
    char name[50] ;
    float cgpa ;
};

void  max_cpga(struct Students stu[] ,int n){
    for(int i = 0 ; i < n ; i++){
        if(stu[i].cgpa > 8.0){
        printf("\n==================\n");    
        printf("Employee Id :%d\n",stu[i].roll_No);      
        printf("Name:%s\n",stu[i].name) ;      
        printf("Salary:%.2f",stu[i].cgpa);
        printf("\n") ;
        }
    }

}

int main(){
   int n ;
    printf("Enter Number of Students: ");
    scanf("%d",&n);

    struct Students stu[n]  ;
    
    for(int i= 0; i < n ;i++){
        printf("Enter Roll Number: ");
        scanf("%d",&stu[i].roll_No) ;
        printf("Enter Name : ") ;
        scanf("%s",stu[i].name) ;
        printf("Enter CGPA : ");
        scanf("%f",&stu[i].cgpa) ;
    }
   
   max_cpga(stu,n);
 
}
