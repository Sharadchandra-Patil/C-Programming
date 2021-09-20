#include<stdio.h>

void swap(int n1,int n2);
int main(void)
{
    int a=5,b=3;
    printf("Before SWAP : A  :%d B : %d",a,b);
    swap(a,b);
    printf("\n After  SWAP : A  :%d B : %d",a,b);

    return 0;
}
void swap(int n1,int n2)
{
     printf("\n Inside Swap functionBefore SWAP : N1  :%d N2 : %d",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\n Inside Swap function After SWAP : N1  :%d N2 : %d",n1,n2);
}

// n1 = 5 n2= 3
//n1=n1+n2;    n1= 5+3  n1= 8 
 //   n2=n1-n2;   n2=8-3  n2= 5
   // n1=n1-n2;   n1 = 8-5  n1=  3
   //n1= 3 n2= 5