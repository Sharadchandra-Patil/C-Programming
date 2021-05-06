#include<stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30; 
    int max;

    if(num1 > num2 )
    {
        if(num1 > num3 )
            max = num1;
        else 
            max = num3;  
    }
    else 
    {
        if(num2 > num3)
            max = num2;
        else 
            max = num3; 
    }
    printf("maxx = %d\n",max);

    max = num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3  );
    printf("maxx = %d\n",max);

}