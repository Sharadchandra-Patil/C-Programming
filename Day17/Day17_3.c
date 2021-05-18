#include<stdio.h> 
 // int arr[5];  
int main()
{
    
    int arr[5] = { 1, 2, 3};
    //int arr[5];// by default garbage local var
    //int arr[] = { 1 , 2, 3 } ;   
    //int arr[]; // size should be given error    
       
    int i;    
    // partiall initialization 

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]); 
    }

    return 0;
}