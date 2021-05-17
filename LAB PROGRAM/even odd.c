#include<stdio.h>
int main()
{
    int no=3;
    
     if(no%2==0)
       printf("\n %d is even", no);
    else
        printf("\n %d is odd", no);

    if(no%2)
       printf("\n %d is odd", no);
    else
       printf("\n %d is even", no);

    return 0;
}