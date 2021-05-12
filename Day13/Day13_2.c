#include<stdio.h>
int add(int num1, int num2 ); 
void sub( int num1 , int num2 ); 
void mult( void  );
int division(int num1 ,int num2);
int main()
{
    int num1=4;
    int num2=2;
    int res; 

    printf("Inside main\n");
    res = add( num1 , num2);
    printf("Addition is %d\n",res);

    printf("Inside main function (2)  \n");
    sub( num1,num2); // 4 2  
    // num1 and num2 are called as actual arguments 

    printf("Inside the main (3)\n"); 
    mult();

   printf("Inside the main (4)\n");



    res = division(4,2); 
    printf("division of 2 number are %d\n",res); 

    printf("Finally exit!!!!\n");    

    return 0; 

}
// main --> calling function 
// add --> called function 
int division(int num1 ,int num2)
{
    printf("Inside division function\n");
    int result; 
    result = num1 / num2; 
    return result; 
}

void mult( void  )
{
    printf("Inside the mult function \n");
    int a,b;
    int res; 
    printf("Enter the a and b \n");
    scanf("%d%d",&a,&b);
    res = a * b; 
    printf("result = %d\n",res);

}


// num1 = 4  num2 = 2 
// num1 and num2 are called as formal arguments 
void sub( int num1 , int num2 )
{
    printf("Inside the sub function\n"); 
    int res; 
    res = num1 - num2; // 2 
    printf("sub = %d\n",res); 

}

int add(int num1, int num2 )
{
        printf("Inside add function\n");
        int result; 
        result = num1 + num2; 
        return result; 
}