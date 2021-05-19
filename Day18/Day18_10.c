#include <stdio.h>
int main(void)
{
double arr[3];
char *p1, **p2;
//printf("%u, ", sizeof(arr) + sizeof(arr[0]));

printf("size=%d",sizeof(*p1)); //1 
printf("size=%d",sizeof(*p2)); //4 
printf("size=%d",sizeof(p1)); //4 
printf("size=%d",sizeof(p2)); //4 



//printf("%u\n", sizeof(*p1) + sizeof(*p2) + sizeof(p1) + 
//sizeof(p2));

return 0;
} 