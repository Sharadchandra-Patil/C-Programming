#include<stdio.h>
int main()
{
	int i,j,n;

	printf("Enter value for rows of triangle :");
	scanf("%d",n);
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{  
		
		   /*	if(j==1 || j==i || i==1 || i==5)
        		printf(" * ") ;
            else
				printf("   ");
			*/	
			if(j>1 && j<i && i>1 && i<5)
        		printf("   ") ;
            else
				printf(" * ");
		}
		printf("\n");
	}
}
