#include<stdio.h>
#include<limits.h> 
int main()
{
     int num=2147483647; 
     printf("num = %d\n",num);      
     printf("max rang of char = %d\n",CHAR_MAX);
     printf("min rang of char = %d\n",CHAR_MIN);       

    printf("max range of int = %d\n",INT_MAX);
    printf("min range of int = %d\n",INT_MIN);

    printf("Max range of unsigned char = %d",UCHAR_MAX);

    return 0;
}