#include<stdio.h>

int main() 
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    /*          [0]    [1]   [2]
        [0]      1      2     3       
                100    104   108

        [1]      4      5     6      
                112    116  120

        [2]      7      8     9
                124    128   132 
    */

    printf("arr[0][0]=%d\n",arr[0][0]); 
    printf("arr[0][1]=%d\n",arr[0][1]);
    printf("arr[0][2]=%d\n",arr[0][2]);  

    printf("arr[1][0]=%d\n",arr[1][0]); 
    printf("arr[1][1]=%d\n",arr[1][1]);
    printf("arr[1][2]=%d\n",arr[1][2]); 

    printf("arr[2][0]=%d\n",arr[2][0]); 
    printf("arr[2][1]=%d\n",arr[2][1]);
    printf("arr[2][2]=%d\n",arr[2][2]);  

     

    
    
}