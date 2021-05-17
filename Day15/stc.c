#include <stdio.h>
//int ext = 30;
//extern int ext;
int main(void)
{
int ext;
printf("Ext = %d ", ext);
extfun();
return 0;
} 
//int ext = 10;
int extfun(void)
{
int ext = 20;
printf("%d\n",ext);
}