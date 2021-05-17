#include<stdio.h>
int main()
{
	unsigned int num;
	int d[33],i;
	printf("Enter the positive integer number ::");
	scanf("%u",&num);
	
	int len=0;
	while(num>0)
	{
		d[len]=num%2;
		num=num/2;
		len++;
	}
	
	for(i=len-1;i>=0;i--)
	{
		printf("%d",d[i]);
	}
	
}
