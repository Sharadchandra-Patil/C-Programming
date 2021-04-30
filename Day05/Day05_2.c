#include<stdio.h>
#include<limits.h>
int main()
{

    signed char ch;
    // signed range 127 to -128 

    ch = 127;
    printf("%d\n",ch);
    ch = 100;   
    printf("%d\n",ch);

    ch = 128; 
    printf("%d\n",ch);

    ch = 129;
    printf("%d\n",ch);

    return 0;
}