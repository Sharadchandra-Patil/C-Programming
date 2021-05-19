#include<stdio.h>
int no1=10, no2=20;
void swap(void); 
int main(void)
{
    printf("\n before swap in main no1=%d [%u] no2=%d [%5u]", no1, &no1, no2, &no2);
    swap();
    printf("\n after swap in main no1=%d [%u] no2=%d [%5u]", no1, &no1, no2, &no2);
    return 0;
}

void swap(void)
{
    int temp;
    printf("\n before swap in swap n1=%d [%u] n2=%d [%5u]", n1, &n1, n2, &n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n after swap in swap n1=%d [%u] n2=%d [%5u]", n1, &n1, n2, &n2);
    return;
}
