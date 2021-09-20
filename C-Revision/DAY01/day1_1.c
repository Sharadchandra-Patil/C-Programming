#include<stdio.h>
//Functions
//1. Function declaration / function prototype / function signature 
// return type function_name([list of arguments optional]); 

//2. Function definition / function body 
//return type function_name()
//{
    // function body 
//}
//3. Function call 
// function_name();


void test(); // function declaration 

int main(void)
{
     test();//function call (calling area)
     test();
    return 0;
}

void test() //function definition / body 
{
    printf("\n Inside Test Function");
} //scope of the function 
