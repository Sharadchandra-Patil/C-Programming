#include<stdio.h>
int pd(int);

int main()
{
	int n;
	printf("Enter positive integer number ::");
	scanf("%d",&n);
	int ono = n;
	int rev_num = pd(n);
	printf("\n% d\n",rev_num);
	if(ono==rev_num)
	    printf(" pallindrome");
	else
	    printf(" Not pallindrome");
		
	return 0;
}

int pd(int n)
{	
    static int rn=0;
	if(n==0)
	{
		return 0;
	}
    else
	{
		rn=rn*10 + n%10 ;
		pd(n/10);
		
		return rn;
	}
}
