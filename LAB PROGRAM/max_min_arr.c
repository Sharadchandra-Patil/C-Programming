#include<stdio.h>
#include<limits.h>
void Max_Min_ArrayElements(int *a ,int n );

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
	
     Max_Min_ArrayElements(arr,n);
    
    return 0;
}

void Max_Min_ArrayElements(int *a,int n)
{
	int min=INT_MAX, max=INT_MIN,i;
	for(i=0;i<n-1;i++)
		{
				if(a[i]>max)
				   max=a[i];
				   
				if(a[i]<min)
				   min=a[i];  
        }
    printf("\n**Greatest element in given array =>> [%d]",max);
    printf("\n\n**Lowest element in given array =>> [%d]\n\n",min);
}
