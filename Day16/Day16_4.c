#include<stdio.h>

int main()
{
    int num = 100; 
    int *ptr; //// ptr is a pointer to the integer 
    char *cptr; // cptr is a pointer to the character
    float *fptr;// fptr is pointer to the float   
 
// ptr can store the address of integer variable     
    printf("&num = %u",&num);
    // & --> address-of operator  
}