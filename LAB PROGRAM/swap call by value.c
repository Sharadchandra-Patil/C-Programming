#include<stdio.h>
void swap(int n1, int n2); // call by value
int main(void)
{
    int no1=10, no2=20;
    printf("\n before swap in main no1=%d [%u] no2=%d [%5u]", no1, &no1, no2, &no2);
    swap(no1, no2); /// no1 and no2 are actual arguments
    printf("\n after swap in main no1=%d [%u] no2=%d [%5u]", no1, &no1, no2, &no2);
    return 0;
}
// n1 and n2 are formal arguments
void swap(int n1, int n2)
{
    int temp;
    printf("\n before swap in swap n1=%d [%u] n2=%d [%5u]", n1, &n1, n2, &n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n after swap in swap n1=%d [%u] n2=%d [%5u]", n1, &n1, n2, &n2);
    return;
}

/*
1. way using temp
temp=no1;
no1=no2;
no2=temp;

no1   no2   temp
10    20     10
20    10

2. using add and sub

no1= no1+no2;
no2= no1-no2;
no1= no1-no2;

no1   no2
10     20
30     10
20


3. multiply and divide

no1=no1*no2;
no2= no1/no2;
no1= no1/no2;

no1  no2  
10    20
200   10
20

4. bit wise operator xor

*/

