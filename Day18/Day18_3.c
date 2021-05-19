#include<stdio.h>

int main()
{
    const int num = 100;
    const int num2 = 200;  
    const int const * const ptr= &num;
// ptr is a constant pointer pointing to the constant integer variable 
    printf("num = %d",num);
    printf("num = %d",*ptr);
    //ptr = &num2;// ptr is a constant pointer 
    //*ptr = 2000;// not possible  
    // ptr is storing the address of constant int variable   

//const int const * const ptr // OK 
// int const * const ptr  // OK 
// const int * const ptr  // OK 
// All are same 

// both the value and ptr are constant 

// const int * ptr const // Errror 
// const int * const ptr const // Error 

// const int * ptr 
// int const * ptr 
// Both are same value is constant 

}