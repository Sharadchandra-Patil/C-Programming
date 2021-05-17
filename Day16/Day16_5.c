#include<stdio.h> 

int main()
{
    int num = 10; 
 // 0000 0000 0000 0000 0000 0000 0000 1010   
 //      <----  address  ---->  
    // num will take 4 bytes of space 
    // num will have the address 
     int *ptr; // pointer declared 
     // ptr is pointer to integere   

    ptr = &num; // referencing operation 
    // pointer initialiazation 

    printf("num= %d\n",num); // 10 
    printf("&num=%u\n",&num);// address of num; 

    printf("ptr=%u\n",ptr);
    // ptr prints the content inside the ptr i.e &num  
    printf("&ptr=%u",&ptr); 
    // &ptr prints the address of pointer ptr 

    printf("\n\n"); 

    //* --> dereferencing operator / value-at

    printf("*ptr=%d",*ptr);
    printf("sizeof(ptr)=%d\n\n",sizeof(ptr));

    printf("\n sizeof(*ptr)=%d",sizeof(*ptr)); 


}

