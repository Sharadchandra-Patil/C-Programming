#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50}; 
    //arr++; lvalue arror 
    // ++i++ // lvalue error  
    int *ptr = arr; 

    printf("%d",++*ptr);
    // ++*ptr 
    // ++(*ptr)
    // ++ ( *(100))
    // ++ ( 10 )
    // 11 

    printf("%d\n",*++ptr);
    // *++ptr
    // ptr = ptr + 1 
    // * (ptr + 1) 
    // 20   

    printf("%d\n",*ptr++);
    // * and ++ has prec 
    // so R to L asso 
    //  *( ptr++)
    // value-at operator will print value 
    //  ptr ++ will incr the pointer 
    // ptr will point to next location  

    // *(ptr++) 
    printf("%d\n",*ptr);   

    // ++*ptr++ // Homework 

}