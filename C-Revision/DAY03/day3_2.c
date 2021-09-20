#include<stdio.h>

int main(void)
{
    int num=20;
    int *ptr=&num;
    printf("Num : %d *ptr : %d ",num,*ptr);
    printf("\n &Num : %u ptr : %u ",&num,ptr);

    //num++;
    //printf("\n Num : %d *ptr : %d ",num,*ptr);

    // ptr = 2296
    // ptr++ = address++ 
    // 2296++ 
    // Pointer Arithemetic is based on scale factor of pointer
    // ptr scale factor = 4bytes 
    // 2300


    //*ptr++;
    // *ptr++
    // *2296++
    //* 2300 
    // GARBAGE 
    //printf("\n Num : %d *ptr : %d ",num,*ptr);


   // (*ptr)++;
    //(*ptr)++
    //(*2296)++
    //20++
    //21 

    //printf("\n Num : %d *ptr : %d ",num,*ptr);      


   // *++ptr;
    //*++ptr
    //*++2296
    //*2300
    // GARBAGE 
    //printf("\n Num : %d *ptr : %d ",num,*ptr);     

   // ++*ptr;
    //++*ptr
    // ++*2296
    //++20
    //21 
    //printf("\n Num : %d *ptr : %d ",num,*ptr);  

       --*ptr;
       //--*ptr
       //--*2296
       //--20
       //19
       printf("\n Num : %d *ptr : %d ",num,*ptr);  

      
    return 0;
}