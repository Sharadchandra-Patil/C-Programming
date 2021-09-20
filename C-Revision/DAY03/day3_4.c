#include<stdio.h>





/*
int main(void)
{
    int a[4]={10,20,30,40};
    //288  292  296  300    304  308  312 316     320   324   328  332    336....
    //    BLOCK1              BLOCK2                 BLOCK3               BLOCK4
    printf("a = %u  &a[0] = %u  &a = %u",a,&a[0],&a);
    printf("\n a+1 = %u ",a+1); // 288+1  // 292 
    printf("\n &a+1 = %u",&a+1); //&288+1 // block1 + 1 // 304 
     //printf("\n &a+1 = %u",&(a+1)); //error 
      // printf("\n &a+1 = %u",&[a+1]); // Error
    printf("\n &a+2 = %u",&a+2);


    return 0;
}

*/