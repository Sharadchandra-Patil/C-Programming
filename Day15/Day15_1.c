#include<stdio.h>



//register int num5=100;// Not allowed 
int main()
{
    register int i =1; 
    for(i=1;i<=5;i++)
    {
        printf("Inside the loop %d\n",i);
    }
    {
           register int i = 50; 
           printf("\n\nInside the block%d\n",i); 

    }
    register int num1;
    printf("num1 = %d\n",num1);

    //register static int max;
    // Error not allowed 
    int temp; 
    printf("Temp Address = %u\n",&temp); 
    //printf("num1 Address = %u\n",&num1);// Error 

}