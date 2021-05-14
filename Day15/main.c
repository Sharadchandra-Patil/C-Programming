#include<stdio.h>

void fun1( void );  // function dec/prototype/signature  
void fun2( void ); 
int num1=10; 

// num1 is a global variable 
// num1 is stored in data section 
// num1 is accessible throut the program 
// num1 is by default 0 

static int num2 = 100; 
// default value is 0 
// stored inside the data section 
// limited scope 

int main()
{
    //int num=100; // auto // garbage // block 
    printf("Inside main num = %d\n",num1);
    fun1();
    fun2();
    printf("Back to main\n");  
}