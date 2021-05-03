#include<stdio.h>

int main()
{
    
    int num1,num2;
    int result;

    printf("Enter the number\n");
    scanf("%d%d",&num1,&num2);

    result = num1 + num2; 

    printf("result = %d\n",result);

    result = num1 - num2; 

    printf("result = %d",result);


    return 0;
}