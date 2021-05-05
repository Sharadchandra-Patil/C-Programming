#include<stdio.h>

int main()
{
    int num1 =100;
    int num2 =20;
    int max; 

    // i want to find greatest of 2 number  

    if(num1 > num2 ) // 100 > 20 // T // if(1)--> True  
    {
           max = num1;
           // max = 100   
    }
    else 
    {
           max = num2; 
    }

    printf("Max = %d\n",max); // 100 

}