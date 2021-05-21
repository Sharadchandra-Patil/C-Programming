#include<stdio.h> 
#include<stdlib.h>

int main()
{
    // dynamic memory allocation 
    // memory at runtime 
    // void* malloc(size_t size)
    // size_t --> typedef unsigned int 

    float *ptr; 
    // request to the memory 
    ptr = (float*)malloc(sizeof(float));  
    // ptr contains address of allocated memory block 

    if(ptr==NULL)
       printf("failed to allocated the memory"); 

    *ptr = 30.25; 
    // use of memory;

    printf("The value is %f",*ptr);
    // if havent free it will result to memory leakage of 4 bytes  

    free(ptr); // Release the memory 
 

    ptr = NULL; 
    // to avoid dangling pointer

    return 0;
}