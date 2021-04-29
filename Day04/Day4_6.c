#include<stdio.h>

int main()
{
    int num1 = 100;
    // variable intialization 
    printf("num1= %d\n",num1);
    // state of num1 is 100 , 100 is printed 
    num1 = 300; 
    //Assignment 
    printf("num1 = %d\n",num1); 
    num1 = 400;   
    printf("num1 = %d\n",num1); 

    num1 = 400 + 100; 
    printf("num1 = %d\n",num1); 


    return 0;
}