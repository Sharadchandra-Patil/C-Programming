#include<stdio.h>
int add(int num1, int num2 ); // function declaration 
int main() // entry point function 
{
    int a = 2;
    int b = 3;
    int res; 

    res = add( a, b); // function call 

    printf("Addition if two numbers are %d \n",res); 

    res = add ( 5,5 );

    printf("Addition if two numbers are %d \n",res);        
    
    

   
    return 0;
}

// return-type function-name ( arg1 , arg2 ) 
//           5         5 
int add(int num1, int num2 ) // add is the user defined  function 
{ 
        int result; 
        result = num1 + num2; // 5 
        return result; //5  

}