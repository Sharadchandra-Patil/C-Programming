#include<stdio.h>
int main()
{
    int num;
    char ch;
    double d1;
    float fvar; 
    // fact of 3 -> 6 
    // fact of 5 -> 120   
    // fact of 10000   

   // short int num1; 
   long  long int num1;
    num1 = 32768; 
    printf("num1 = %lld\n",num1);

     printf("shortint=%d\n",sizeof(num1));
    printf("num=%d\n",sizeof(num));
    printf("char=%d\n",sizeof(ch));
    printf("double=%d\n",sizeof(d1));
    printf("fvar=%d\n",sizeof(fvar));
    printf("By default size of fractional number is = %d",sizeof(10.20));
    printf("\nsize of fractional number is = %d",sizeof(10.20f));
    printf("\nsize of fractional number is = %d",sizeof(10.20F));
    return 0;
}