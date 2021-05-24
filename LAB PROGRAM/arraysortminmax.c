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
	int max,min,max_index,min_index,i;
	int start=0;
	int end=n-1;
	
	while(start<end)
	{
		min=INT_MAX;
		max=INT_MIN;
		
        for(i=start;i<=end;i++)
		   {
				if(a[i]>max)
			      {
				   max=a[i];
				   max_index=i;
                  }
                  
                if(a[i]<min)
			      {
				   min=a[i];
				   min_index=i;
                 }  
           }
           
        if(end!=max_index)
		{
        a[end] = a[end] + a[max_index];
        a[max_index]=a[end] - a[max_index];
        a[end]=a[end] - a[max_index];
        }
        
        if(start!=min_index)
        {
        	a[start] = a[start] + a[min_index];
            a[min_index] = a[start] - a[min_index];
        	a[start] = a[start] - a[min_index];
		}
		start++;
		end--;
		
   }

   
    printf("\n**Sorted given array =>>\n\n");
         for(i=0;i<n;i++)
	       {
		      printf("a[%d]=%d    ",i,a[i]);
        	}

   
}
