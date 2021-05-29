#include<stdio.h>
	int main()
	{
		int a[] [2]={1, 9, 3, 4, 5, 6}; 
		int *p = (int *)*a;
		int **pp = &p;
		printf("%u\n",pp);

		printf("%d\n",*pp);
		printf("%d\n",p);
		++*pp;
		printf("%u\n",*pp);
		printf("%u\n",p);
		*++*pp--; 
		++pp;
		
		printf("\n%u",*p - **pp);
        return 0;
	}
