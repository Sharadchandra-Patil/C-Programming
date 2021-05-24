#include<stdio.h>
#include"test.h" 



// gcc main.c prog1.c 
// #include "test.h"
// scanf_s 
// 1. main.c // calling the add function   


// 2. prog1.c // defination of add function 

// 3. Header file  // declaration 


int main()
{
    double rad,area; 
    printf("Enter the radius");
    scanf("%lf",&rad); 

    area = PI * rad * rad; 
    printf("%lf",area); 
}
