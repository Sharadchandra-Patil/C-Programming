#include<stdio.h>

int main()
{
    int arr[5] ={ 10,20,30,40,50}; 

    //printf("&arr[0]=%u",&arr[0]); 
    // name of array --> arr 
    // name of array represents address of first element


    // 10      20     30    40    50   
    // 100    104    108   112    116 
    //  0      1      2     3      4 
    printf("arr=%u\n",arr);
    // arr --> 
    // 100 

    printf("arr+1=%u\n",arr+1);
    // arr + 1 -->  
    // 100 + 1 --> 
    // 104 

    printf("arr+2=%u\n",arr+2);
    // arr + 2
    // 100 + 2 * 4 
    // 100 + 8 
    // 108  
    printf("arr+3=%u\n",arr+3);
    // arr + 3 
    // 100 + 3 * 4 
    // 112 

    printf("arr+4=%u\n",arr+4);  


}