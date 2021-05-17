#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num; // referencing operation 

    printf("&num=%u\n",&num); 
    printf("ptr =%u\n",ptr);
    printf("ptr =%u\n",&ptr); 
    printf("*ptr=%d",*ptr); // 10  

    ptr = ptr + 1;  // ptr is incrmented 

    printf("\n\n");
    printf("ptr =%u\n",ptr);
    printf("*ptr =%u\n",*ptr);

    ptr = ptr - 1; 
     
   printf("\n\n");
   printf("ptr =%u\n",ptr);
    printf("*ptr =%u\n",*ptr);  

    return 0;
}