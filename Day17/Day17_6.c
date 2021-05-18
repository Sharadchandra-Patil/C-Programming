#include<stdio.h>

int main() 
{
    int arr[5]={10,20,30,40,50};
    printf("%d\n",arr[0]);
    printf("%d\n",0[arr]); 
    int *ptr = arr;
    //  int *ptr = &arr[0];  
    // ptr is pointer pointing to first location 
    
    int i; 
 /*
    for(i=0;i<5;i++)
    {
        printf("%u ",&arr[i]); 
    }
  */

   /* 
    printf("\n\n");
    printf("ptr = %u\n",ptr);
    printf("ptr+1 = %u\n",ptr+1);
    printf("ptr+2 = %u\n",ptr+2);
    printf("ptr+3 = %u\n",ptr+3);
    printf("ptr+4 = %u\n",ptr+4);

    */
   /*
    printf("\n\n");
    printf("ptr = %u\n",ptr);
    printf("ptr+1 = %u\n",1+ptr);
    printf("ptr+2 = %u\n",2+ptr);
    printf("ptr+3 = %u\n",3+ptr);
    printf("ptr+4 = %u\n",4+ptr);
    */
    printf("%d\n",ptr[0]);
    printf("%d\n",*(ptr+0));
    // ptr[0] --> 
    // * ( ptr + 0 )
    //  * ( 100 + 0 )
    //  * ( 100 )
    //  10    

     printf("%d\n",ptr[1]);
     printf("%d\n",*(ptr+1));
     printf("%d\n",*(1+ptr));
     printf("%d\n",1[ptr]);
     // ptr[1]
     // *( ptr + 1 )
     // * ( 100 + 1 )
     // * ( 104 )
     // 20 

     // ptr[2]
     // *( ptr + 2 )
     // * ( 100 + 2 * 4 )
     // * ( 108 )
     //  30  

}