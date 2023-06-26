//Q.1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
#include<conio.h>

int main(){

int a,b,c;

printf("enter the value of first number  :  ");
scanf("%d",&a);

printf("enter the value of second number :  ");
scanf("%d",&b);

printf("enter the value of third number :  ");
scanf("%d",&c);

(a<b)?
      (a<c)? printf("the minimum value is %d",a) 
           : printf("the minimum value is %d \n",b)
    
      
     :(b<c)? printf("the minimum value is %d\n",b)
           : printf("the minimum value is %d \n",c);
      
return 0;
getch();

 }


