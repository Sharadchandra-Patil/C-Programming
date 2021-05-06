#include<stdio.h>

int main()
{
    int num1 =10;
    int num2 =100;

    int max;
    /*
    if ( num1 > num2 )
         max = num1; 
    else 
         max = num2; 

    printf("max = %d",max);   
    */

    max = num1 > num2 ? num1 : num2; 
    printf("%d\n",max);
}
/*
    condition ? expression1 : expression2

      ? : 

*/ 