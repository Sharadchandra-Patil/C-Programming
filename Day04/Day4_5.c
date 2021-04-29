#include<stdio.h>

int main()
{
    // int  --> %d
    // char --> %c
    // double --> %lf
    // float --> %f 
    char ch='A';
    printf("%c\n",ch); //character representation of ch 
    // ch is of character type
    // %c --> char 
    int num1=100;
    printf("%d\n",num1);// decimal representation of num1 
    // num1 is of int type
    // %d --> int 
    double d1=20.33;
    printf("%lf\n",d1); // double rep of d1 
    // %lf --> for double 
    // d1 is of double

    printf("num1=%dch=%cd1=%lf",num1,ch,d1);

    return 0; 
}