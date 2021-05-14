#include<stdio.h> 
extern int num1; 
//extern int num2; // error static scope is limited  
void fun2()
{
     num1++;   
     printf("Inside the fun2: num1 = %d\n",num1); 
}