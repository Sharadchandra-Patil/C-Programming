/* Write a function to divide two integers. 
 Function should return 1, if it is successful.
 It should return 0, if it is failed (trying to divide by zero). 
 Function should also return quotient and remainder (via pointers).
 */
 #include<stdio.h>
 int divide(int numerator, int denominator, int *quotient, int *remainder);
 
 int main(void)
 {
 	int num,den,flag=1,quotient=0,remainder=0;
 	printf("Please enter value for number1::");
 	scanf("%d",&num);
 	printf("Please enter value for number2::");
 	scanf("%d",&den);
 	flag = divide(num,den,&quotient,&remainder);
 	if(flag==0)
 	   printf("\n Divide by zero error.");
 	else
 		printf("quotient=%d  remainder=%d ",quotient,remainder);
 return 0;
}

int divide(int numerator, int denominator, int *quotient, int *remainder)
{
	if(denominator==0)
		return 0;
	else
	{
		*quotient=numerator/denominator;
		*remainder=numerator%denominator;
		return 1;
	}
}
 
 
