/*
Enter value for char FROM to TO for printing char pyramid: A E

                 A  A
              B  A  A  B
           C  B  A  A  B  C
        D  C  B  A  A  B  C  D
     E  D  C  B  A  A  B  C  D  E
     E  D  C  B  A  A  B  C  D  E
        D  C  B  A  A  B  C  D
           C  B  A  A  B  C
              B  A  A  B
                 A  A
 
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
	
	for(i=FromChar;i<=ToChar;i++)
	    {
	      for(j=i;j<=ToChar;j++)
	    	    printf("   ");
	      
		  for(j=i;j>=FromChar;j--)
	    	    printf("%3c",j);
	      
		  for(j=FromChar;j<=i;j++)
	    	    printf("%3c",j);
	      	   
		  printf("\n");   	    
	    }
	    
	for(i=ToChar;i>=FromChar;i--)
		{
			for(j=i;j<=ToChar;j++)
				printf("   ");
				
			for(j=i;j>=FromChar;j--)
				printf("%3c",j);
				
			for(j=FromChar;j<=i;j++)
				printf("%3c",j);
				
		    printf("\n");		
     }
		    
	return 0;    
}
