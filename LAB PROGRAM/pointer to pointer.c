#include<stdio.h>
int main(void)
{
    int i=10; // variable
    int *pi= &i;  // pointer
    int **ppi=&pi; // pointer to pointer
    int ***pppi= &ppi; 

    printf("\ni=%d *pi=%d *(&i)=%d **ppi=%d", i, *pi, *(&i), **ppi);
    printf("\n &i=%u pi=%u &pi=%u ppi=%u &ppi=%u",&i, pi, &pi, ppi, &ppi );

    printf("\n size of i=%d", sizeof(i));
    printf("\n size of pi=%d", sizeof(pi));
    printf("\n size of ppi=%d", sizeof(ppi));

    *pi=20;
    printf("\ni=%d *pi=%d *(&i)=%d **ppi=%d", i, *pi, *(&i), **ppi);
    printf("\n &i=%u pi=%u &pi=%u ppi=%u &ppi=%u",&i, pi, &pi, ppi, &ppi );

    **ppi= 30;
    printf("\ni=%d *pi=%d *(&i)=%d **ppi=%d", i, *pi, *(&i), **ppi);
    printf("\n &i=%u pi=%u &pi=%u ppi=%u &ppi=%u",&i, pi, &pi, ppi, &ppi );

    return 0;
}