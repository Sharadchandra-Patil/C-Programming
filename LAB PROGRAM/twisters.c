#include<stdio.h>
#include<stdlib.h>
int main( void )
{
int *a[3];
printf("%u  %u   %u\n",&a+1,&a[0]+1,a+1);

//a = (int*) malloc(sizeof(int)*3);
//free(a);
return 0;
}
