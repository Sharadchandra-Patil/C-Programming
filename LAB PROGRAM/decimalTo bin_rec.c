#include<stdio.h>
int DecToBin(int);
int main()
{
	int num;
	printf("Enter the positive integer number ::");
	scanf("%u",&num);
	
    int ans=DecToBin(num);
	printf("\nBinary conversion is :: %d",ans);
	
	return 0;
		
}

int DecToBin(int num)
{
	if(num==1)
	 {
	 	return 1;
	 }
	else
	{
		return DecToBin(num/2)*10 + num%2 ;
		
	 } 
}
