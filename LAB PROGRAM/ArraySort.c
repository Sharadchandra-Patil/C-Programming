#include<stdio.h>
#include<limits.h>
void ArraySort(int *a ,int n );

int main()
{
	int n;
	printf("Enter No. of array elements ::");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter array element arr[%d]:: ",i);
		scanf("%d",&arr[i]);
	}
	
     ArraySort(arr,n);
    
    return 0;
}

void ArraySort(int *a,int n)
{
	int max=INT_MIN,i;
	int j=n-1,max_index;
	while(j!=0)
	{
		printf("\nj=%d  ",j);
       for(i=0;i<=j;i++)
		   {
				if(a[i]>max)
			      {
				   max=a[i];
				   max_index=i;
                 }
           }
       // printf("max=%-6d  max_index=%-6d ",max,max_index);   
           
        if(j!=max_index)
		{
        a[j]=a[j] + a[max_index];
        a[max_index]=a[j] - a[max_index];
        a[j]=a[j] - a[max_index];
        }
         for(i=0;i<n;i++)
	       {
		      printf("a[%d]=%-6d  ",i,a[i]);
        	}
        printf("\n");
	   j--;
	   max=INT_MIN;
   }
   
    printf("\n**Sorted given array =>>\n\n");
         for(i=0;i<n;i++)
	       {
		      printf("a[%d]=%d    ",i,a[i]);
        	}

   
}
