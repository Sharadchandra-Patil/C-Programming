#include<stdio.h>

int main()
{
    int arr[5] = { 10,20,30,40,50}; 

   printf("arr[0]=%d",arr[0]);

  /*
    arr[0] --> *( arr + 0 ); 
    arr[1] --> *( arr + 1 ); 

    arr[0] --> 
    *( arr + 0 )
    *( 100 + 0 )
    *(100) 
    10 

    arr[1] --> 
    *(arr+1)
    *(100 + 1 )
    * ( 104)
     20 

     arr[2] --> 
     *(arr + 2 )
     *( 100 + 2 )
     * ( 108 )
     30   

  */ 

 printf("*(arr+0)= %d\n",*(arr+0));
 printf("*(arr+0)= %d\n",*(0+arr));
 printf("*(arr+0)= %d\n",*(arr+1-1)); 


  printf("*(arr+1)= %d\n",*(arr+1));
  printf("*(arr+2)= %d\n",*(arr+2));
  printf("*(arr+3)= %d\n",*(arr+3));
  

}