#include<stdio.h>
int main(void)
{
    {
    int no1=10;
    //int *ptr=&no1;  // or 
    int *ptr=NULL;
    ptr=&no1;

    printf("\n no1=%d [%u] ", no1 ,&no1);
    printf("\n *(&no1)=%d *(ptr)=%d [%u] &ptr=%u",*(&no1), *ptr, ptr, &ptr);

    *ptr=20;

    printf("\n no1=%d [%u] ", no1 ,&no1);
    printf("\n *(&no1)=%d *(ptr)=%d [%u] &ptr=%u",*(&no1), *ptr, ptr, &ptr);

    printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
    printf("\n &no1=%u &no1+1=%u", &no1, &no1+1);
    }
    printf("\n=========================\n");
{
    char no1='A';
    //int *ptr=&no1;  // or 
    char *ptr=NULL;
    ptr=&no1;

    printf("\n no1=%c [%u] ", no1 ,&no1);
    printf("\n *(&no1)=%c *(ptr)=%c [%u] &ptr=%u",*(&no1), *ptr, ptr, &ptr);

    *ptr='B';

    printf("\n no1=%c [%u] ", no1 ,&no1);
    printf("\n *(&no1)=%c *(ptr)=%c [%u] &ptr=%u",*(&no1), *ptr, ptr, &ptr);

    printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
    printf("\n &no1=%u &no1+1=%u", &no1, &no1+1);

}
    return 0;
}