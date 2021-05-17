/*
Enter value for number FROM to TO for printing number pyramid: 1 5

  1  2  3  4  5  4  3  2  1
  1  2  3  4     4  3  2  1
  1  2  3           3  2  1
  1  2                 2  1
  1                       1
  1  2                 2  1
  1  2  3           3  2  1
  1  2  3  4     4  3  2  1
  1  2  3  4  5  4  3  2  1

*/

#include<stdio.h>
int main()
{
	int i,j;
	int FromNum,ToNum;
	printf("Enter value for number FROM to TO for printing number pyramid: ");
	scanf("%d",&FromNum);//FROM 1
	scanf("%d",&ToNum);//TO n
	printf("\n");
	
           //n       //1
	for(i=ToNum;i>=FromNum;i--)
		{
		          //1
			for(j=FromNum;j<=i;j++)
				printf("%3d",j);	
		              //n
			for(j=i;j<ToNum;j++)
				printf("   ");
				
			for(j=i+1;j<ToNum;j++)
				printf("   ");	
						
			for(j=i;j>=FromNum;j--)
				{
					if(j==ToNum)
						continue;
						
					printf("%3d",j);
				}			
				
			printf("\n");
				
	    }
				
	for(i=FromNum;i<=ToNum;i++)
		{   
		  if(i==FromNum)
		    	continue;
		
		
	        for(j=FromNum;j<=i;j++)
				printf("%3d",j);	
	            
			for(j=i;j<ToNum;j++)
				printf("   ");
			
			for(j=i+1;j<ToNum;j++)
				printf("   ");
				
			for(j=i;j>=FromNum;j--)
				{
					if(j==ToNum)
						continue;
						
					printf("%3d",j);
				}
				
			printf("\n");
						
        }
		    
	return 0;    
}
