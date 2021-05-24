#include<stdio.h>
int a1[] = {6, 7, 8, 18, 34, 67};
int a2[] = {23, 56, 28, 29};
int a3[] = {-12, 27, -31};
int *x[] = {a1, a2, a3};
void print(int *a[])
{
    printf("%d,", a[0][2]);
    printf("%d,", a2[0]);
    printf("%d,", a[1][0]);
    printf("%d,", a[1][0]);
    printf("%d,", *++a[0]);
    printf("%d,", *++a[0]);
    printf("%d,", *++a[0]);
    printf("%d,", a[0][1]);
    printf("%d,", a[0][1]);
    
    //printf("%d,", *(++a)[0]);
	printf("%d,", *(++a)[0]);
}

int main()
{
    print(x);
    return 0;
}
