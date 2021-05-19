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
    printf("\n *(&no1)=%d *(ptr)=%d [%p] &ptr=%u",*(&no1), *ptr, ptr, &ptr);

    *ptr=20;

    printf("\n no1=%d [%u] ", no1 ,&no1);
    printf("\n *(&no1)=%d *(ptr)=%d [%u] &ptr=%u",*(&no1), *ptr, ptr, &ptr);

    printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
    printf("\n &no1=%u &no1+1=%u", &no1, &no1+1);

    printf("\n ptr=%u ptr+5=%u", ptr, ptr+5);  //20
    printf("\n ptr=%u ptr-5=%u", ptr, ptr-5); // 20 

  //  printf("\n ptr=%u ptr*5=%u", ptr, ptr*5); // error 
  //  printf("\n ptr=%u ptr/5=%u", ptr, ptr/5);  // error


    }
    
    return 0;
}