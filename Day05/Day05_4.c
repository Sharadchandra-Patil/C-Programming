#include<stdio.h>

int main()
{
    // int --> 4 bytes 
    // char --> 1 byte 
    // sizeof is an operator 
    // sizeof(int)--> 4 
    // 4 --> int --> %d 

    printf("size of int = %d\n",sizeof(int));
    printf("size of char = %d\n",sizeof(char));

     int num1;// variable declaration
      
     // num1 is of type int   
     // int is of size of 4 bytes   
     char ch; // variable declaration
    // ch is of type of char 
    // char size is 1 byte


    printf("size of num1 = %d\n",sizeof(num1));
    printf("size of num1 = %d",sizeof(ch));


    return 0;
}