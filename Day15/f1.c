#include<stdio.h> 
extern  int num1;
//extern int num2;// num2 is static acces only inside same file  
void fun1()
{
    num1++;     
    printf("Inside the fun1 : num1 = %d\n",num1); 
    //printf("Inside the fun1 : num1 = %d\n",num2);//error 
}