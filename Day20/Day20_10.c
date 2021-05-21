#include<stdio.h> 
#include<stdlib.h> 

int main()
{
    // calloc function 
    // void* calloc(size_t n ,size_t size  )

    // ptr =  (int*)calloc(3,sizeof(int)); 

       int *ptr; 
       ptr=(int*)calloc(3,sizeof(int));

       int i;

       for(i=0;i<=2;i++)
       {
           *(ptr+i) = 10 * ( i + 1); 
       }

       for(i=0;i<=2;i++)
       {
           printf("%d\n",*(ptr+i));
       } 

        free(ptr); 

        ptr = NULL; 
       



    return 0;
}

/*
    void* realloc(void*ptr , size_t size); 

    ptr = (int*)calloc(3,sizeof(int)); 
        // 10   20  30 
            3 --> 5 

    ptr = realloc(ptr,5*sizeof(int));         

    int arr[20]; //10 
*/
