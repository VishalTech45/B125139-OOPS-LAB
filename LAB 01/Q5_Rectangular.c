#include<stdio.h>

struct Rectangle{
   int length ;
   int breadth ;
   int area ;
   int perimeter ;
} r1 ;

int main(){
    printf("Enter Length : ");
    scanf("%d",&r1.length);
    printf("Enter Breadth:");
    scanf("%d",&r1.breadth);

    r1.area = r1.length *r1.breadth ;
    r1.perimeter = 2*(r1.length + r1.breadth) ;
    
    printf("The Area of Rectangle:%d\n",r1.area);
    printf("The perimeter of Rectangle:%d",r1.perimeter);
    
    
    return 0;
}
