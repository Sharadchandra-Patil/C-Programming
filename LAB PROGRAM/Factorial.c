/*
Enter the number: 10
Factorial of 10 is (1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10) = 3628800
*/

#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("Enter the number: ");
	scanf("%d",&n);
    printf("Factorial of %d is (1",n);
	
	for(i=2,fact=1;i<=n;i++)
	{
	   printf(" * %d",i);
	   fact = fact*i;		
	}
	printf(") = %d\n",fact);
	
	return 0;
}
