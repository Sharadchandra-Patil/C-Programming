#include<stdio.h> 

int main()
{
    int num = 100; 
    void *ptr = &num; 
    // generic pointer 
    printf("%d",*(int*)ptr);
}