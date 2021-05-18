#include<stdio.h>
// data structure --> array 
// array is a linear data structure  
int main() 
{ 
    int arr[5] = { 10,20,30,40,50};
    int *ptr = arr; 

    //printf("%d",ptr[-2]);
    /*
        ptr[-2] --> 

        *( ptr + -2)
        *( ptr - 2 )
        *( 100 - 2 )
        * ( 92 )
        garbage  

    */ 
    ptr++;
    // ptr = ptr + 1 
    //     = 100 + 1
    //       104  
    ptr++; 
    // ptr = ptr + 1
    //       104 + 1 
    //       108    

    printf("%d",ptr[-2]);
    // ptr[-2]
    // *( ptr +  - 2 )
    // * ( ptr - 2 )
    // *  ( 108 - 2 )
    // * ( 100 )
    // 10 

}
/*
int main()
{
    int arr[5]={10,2,30,40,50};

    printf("%d",arr[arr[1]]); 
    // arr[1] --> 2 
    // arr[2] --> 30 
    
    int *ptr1 = &arr[4]; // 116 
    int *ptr2 = &arr[0]; // 100 

    // 116 - 100  --> 16 
    //  16 / 4 
    //  4  

    printf("%d",ptr1-ptr2);
    
    return 0;
}
*/