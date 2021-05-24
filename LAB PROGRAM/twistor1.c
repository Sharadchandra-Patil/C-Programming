#include<stdio.h>
int main( void )
{
	int arr[5]={10,1,2,3,4};
	//int *p=arr;
	int *p[]={arr,arr+1,arr+2};
	int **pptr =p;
	//pptr++;
	printf("\n %u  %u  %u ", arr , arr+1,arr+2);
	printf("\n %u  %u  %u ", **p , **(p+1),**(p+2));
	printf("\n %u  %u  %u ", *p , *(p+1),*(p+2));
	printf("\n %u  %u  %u ", p , p+1,p+2);
	printf("\n %u  %u  %u ", pptr , pptr+1,pptr+2);
//	printf("%d %d",pptr-p,**pptr);
	return 0;
}
