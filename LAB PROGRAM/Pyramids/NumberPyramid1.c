/*
Enter value n for printing number pyramid: 5

                 1  1
              2  1  1  2
           3  2  1  1  2  3
        4  3  2  1  1  2  3  4
     5  4  3  2  1  1  2  3  4  5
     5  4  3  2  1  1  2  3  4  5
        4  3  2  1  1  2  3  4
           3  2  1  1  2  3
              2  1  1  2
                 1  1
*/
                 
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("Enter value n for printing number pyramid: ");
	scanf("%d",&row);
	printf("\n");
	
	for(i=1;i<=row;i++)
	    {
	      for(j=i;j<=row;j++)
	    	    printf("   ");
	      
		  for(j=i;j>=1;j--)
	    	    printf("%3d",j);
	      
		  for(j=1;j<=i;j++)
	    	    printf("%3d",j);
	      	   
		  printf("\n");   	    
	    }
	    
	for(i=row;i>=1;i--)
		{
			for(j=i;j<=row;j++)
				printf("   ");
				
			for(j=i;j>=1;j--)
				printf("%3d",j);
				
			for(j=1;j<=i;j++)
				printf("%3d",j);
				
		    printf("\n");		
     }
		    
	return 0;    
}
