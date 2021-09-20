#include<stdio.h>
#include<string.h>
int main(void)
{
    int a[4][2]={10,20,30,40,50,60,70,80};
    
    int *p=*a;
    //int (*p)[2]=a;
    // p is an array of pointers

    //p[0] = a
    //p[1] = a+1
    //p[2] = a+2
    //p[3] = a+3
    printf("\n Size : %d",sizeof(a));
   // printf("\n a[0][0] = %d **p = %d",a[0][0],p[0][0]);
    printf("\n *(*p+1) : %d",*(p+1));
    return 0;
}