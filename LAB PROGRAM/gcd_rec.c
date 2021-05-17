#include<stdio.h>
int gcd(int , int);
int main()
{
    int n1,n2,ans;
    printf("Enter two numbers 1 :");
    scanf("%d",&n1);
    printf("Enter two numbers 2: ");
    scanf("%d",&n2);
    ans = gcd(n1,n2);
    printf("Greatest common divisor of %d and %d  is = %d ",n1,n2,ans);
    return 0;
}

int gcd(int n1, int n2)
{
	int rem = n1%n2;
	
	if(rem==0)
	  return n2;
	else
	{
		n1=n2;
		n2=rem;
		gcd(n1,n2);
	}
}
