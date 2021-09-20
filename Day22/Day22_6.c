#include<stdio.h> 
int add(int a , int b);
int main() 
{
     //int (*ptr)(int);
     // which accepts an integer and returns the integer
     // ptr is a pointer to the function that accepts the int and returns the int   

        //int(*ptr1)(int,int)=&add;

        int (*ptr2)(int,int)=add; 

         ptr1(2,3);  


}
int add(int a , int b)
{
    printf("Result = %d",a+b); 
}



