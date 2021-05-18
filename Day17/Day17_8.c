#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50}; 

    int i; 

    for(i=0;i<5;i++)
    {
        printf("%u ",&arr[i]); 
    }

    printf("\n\n");
    printf("size=%d\n",sizeof(arr));
    printf("%u",&arr+2); 

}