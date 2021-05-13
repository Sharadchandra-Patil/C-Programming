#include <stdio.h>
int no1 = 17, no2 = 71;
void swapping(void)
{
int temp = no2;
no2 = no1;
no1 = temp;
} 
int main(void)
{
int no1 = 17, no2 = 71;
printf("%d %d ", no1 , no2);
swapping();
printf("%d %d\n", no1, no2);
return 0;
}