#include<stdio.h>

int main()
{
    int num1 = 100;
    int num2 = 20;
    int num3 = 3000;

    // num1 == num2 
    // num2 = num2 

    if(num1 > num2) // 100 > 20 --> T 
    {
        if( num1 > num3) // 100 > 3000 -> F
        {
            printf("num1 is greatest");
        }
        else
        {
            printf("num3 is greatest"); // num3 
        }
        
    } 
    else
    {
        if( num2 > num3 )
        {
            printf("num2 is greater");
        }
        else
        {
            printf("num3 is greater");
        }
        
        
    }
    


    return 0; 
}


