#include<stdio.h>
void swapelements(int *a ,int n );

int main()
{
	int n;
	printf("Enter No. of array elements ::");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter array element arr[%d]:: ",i);
		scanf("%d",arr+i);//&arr[i]
	}
	
     swapelements(arr,n);
    	printf("\n\n **In main()\n Array elements After swapping are ::\n\n");
	for(i=0;i<n;i++)
	{
		printf(" arr[%d]=%d   ",i,arr[i]);
	}
    printf("\n\n");
    return 0;
}

void swapelements(int *a,int n)
{
	printf("\nEntering function\n");
	int i=0,j=n-1;
				    
			     while(i<j)
			     {
			 	   a[i] = a[i] ^ a[j];
				   a[j] =a [i] ^ a[j];
				   a[i] =a [i] ^ a[j];
     		        printf("\n a[%d]=%d   a[%d]=%d ",i,a[i],j,a[j]);
	     	        j--;
	     	        i++;
	     	     }
	printf("\n\nLeaving function\n");     	     
}
	
		

