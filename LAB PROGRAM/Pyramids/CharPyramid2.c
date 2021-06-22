/*Enter value for char FROM to TO for printing char pyramid: A E

  A  B  C  D  E  E  D  C  B  A
  A  B  C  D        D  C  B  A
  A  B  C              C  B  A
  A  B                    B  A
  A                          A
  A                          A
  A  B                    B  A
  A  B  C              C  B  A
  A  B  C  D        D  C  B  A
  A  B  C  D  E  E  D  C  B  A

*/

#include<stdio.h>
int main()
{
	int i,j;
	char FromChar,ToChar;
	printf("Enter value for char FROM to TO for printing char pyramid: ");
	scanf("%c",&FromChar);
	scanf("%*c%c",&ToChar);
	printf("\n");
	

	for(i=ToChar;i>=FromChar;i--)
		{
		
			for(j=FromChar;j<=i;j++)
				printf("%3c",j);	
		
			for(j=i+1;j<=ToChar;j++)
				printf("   ");
				
		    for(j=ToChar;j>=i+1;j--)
				printf("   ");
						
			for(j=i;j>=FromChar;j--)
				printf("%3c",j);
				
				
			 printf("\n");
				
	}
				
		for(i=FromChar;i<=ToChar;i++)
		{
		
			for(j=FromChar;j<=i;j++)
				printf("%3c",j);	
		
			for(j=i+1;j<=ToChar;j++)
				printf("   ");
				
		    for(j=ToChar;j>=i+1;j--)
				printf("   ");
						
			for(j=i;j>=FromChar;j--)
				printf("%3c",j);
				
		    printf("\n");		
     }
	printf("\n");		
	printf("\n");			    
	return 0;    
}
