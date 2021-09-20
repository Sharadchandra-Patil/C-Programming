#include<stdio.h>


void swap_by_val(int num1,int num2);
//void swap_by_val(int,int);

void swap_by_add(int *num1,int *num2);
//void swap_by_add(int *,int*);

int main(void)
{
    int a=10,b=5;
    printf("Before : A = %d B = %d",a,b);
    swap_by_val(a,b);
    //call by value
    printf("\n After : A = %d B = %d",a,b);
     printf("\n Before : A = %d B = %d",a,b);
    swap_by_add(&a,&b);
    //call by address 
    printf("\n After : A = %d B = %d",a,b);
    return 0;
}
void swap_by_val(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void swap_by_add(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}




