#include<stdio.h>
#include<limits.h>

int main()
{
    //printf("max = %d\n",INT_MAX);
    //printf("min = %d\n",INT_MIN);
    // max = 2147483647
    // min = -2147483648

    int num; // signed 
    num = 2147483647; // assignment 
    printf("num = %d\n",num);

    num = 2147483648;
    printf("num = %d\n",num);

    printf("UINT =%u",UINT_MAX);

    return 0;
}