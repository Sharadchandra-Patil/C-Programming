#include<stdio.h>
int main()
{
	int a[][2]={1,9,3,4,5,6};
	int *p= (int*)a;
	int **pp=&p;
     *++*pp--;
     printf("%d\n",*pp);
	++pp;
	printf("\n%u", *p - **pp);
}
