#include<stdio.h> 
void myswap( int num1 , int num2 ); 
int main() 
{
    int num1 = 1;
    int num2 = 2; 

    printf("Inside the main num1 = %d num2 = %d\n",num1,num2 );

    myswap( num1,num2);   

    printf("After calling the swap  num1 = %d num2 = %d\n",num1,num2 );

}
void myswap( int num1 , int num2 )
{ 
    int temp; 
    temp = num1; 
    num1 = num2;
    num2 = temp; 
}