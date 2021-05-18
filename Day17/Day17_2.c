#include<stdio.h> 

int main() 
{
    int arr[5] = { 10,20,30,40,50}; 
    int i; 
/*
     10    20   30   40   50  --> elements   
     0     1     2    3    4  --> index 
    100   104   108  112  116 --> location/address  

*/
     for(i=0;i<5;i++)
     {
         printf("%u\n",&arr[i]); 
     }   
        
     printf("\n\n");   
     for(i=0;i<5;i++)
     {
            printf("%d\n",arr[i]); 
     }
     /*
        printf("arr[0]=%d\n",arr[0]);
        printf("arr[1]=%d\n",arr[1]);
        printf("arr[2]=%d\n",arr[2]);
        printf("arr[3]=%d\n",arr[3]);
        printf("arr[4]=%d\n",arr[4]);
        printf("arr[4]=%d\n",arr[5]);
        


     */

    return 0;
}