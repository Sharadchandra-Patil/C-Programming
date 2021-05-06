#include<stdio.h>
int main()
{
    int num=4;
    int max;
    
    /*
    if(num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");       
    */
       max = num%2==0?printf("Even number%d",num):printf("odd number%d",num); 
                           // Even number4
       printf("%d\n",max); 
}