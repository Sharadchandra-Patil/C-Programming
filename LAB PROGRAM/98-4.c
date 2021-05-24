 #include<stdio.h>
int main()
{
	int a[][2]={1,9,3,4,5,6};
	int *p= (int*)a;
   //printf("%d\n",++(*p--));
	printf("%d\n",*p);
	int **pp=&p;
    
	printf("%d\n",*pp);
	printf("%d\n",p);
	printf("%d\n",a);
	printf("%d\n",pp);
	printf("%d\n",++**pp--);
	printf("%d\n",pp);
	printf("%d\n",p);
	++pp;
	printf("\n%u", *p);
	printf("\n%u", **pp);
	printf("\n%u", *p - **pp);
}
