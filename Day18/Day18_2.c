#include<stdio.h>
int main()
{   
    int num = 100;
    int num2 = 200;
    //int * const ptr; // Error
    //ptr = &num; // Error contant pointer should be init at the time of declaration  
     int * const ptr = &num;
    //int * ptr const  = &num; // syntax error 
// ptr is constant pointer pointing to the non constant integer variable  
    
    printf("num = %d",num);// 100 
    printf("*ptr = %d",*ptr);//100

    //ptr = &num2;     
   // ptr is constant so address of num2 cannot be assigned 
    
    *ptr = 2000;
    printf("num = %d",num);// 100 
    printf("*ptr = %d",*ptr);//100 

    return 0; 
}