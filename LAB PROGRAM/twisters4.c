#include<stdio.h>
 int main() 
{
    char a=255; char b=127;
    
    printf("a=%d b=%d", a, b);
    b=~b; a= a ^ b; 
    printf("\n%d,%d",a,b);

    return 0; 
} 