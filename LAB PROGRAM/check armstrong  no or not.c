#include<stdio.h>
int main(void)
{
    int no, ono, rem, sum;

    printf("\n Enter No :: ");
    scanf("%d", &no);

    ono=no;
    rem=sum=0;

    while(no!=0)
    {
        rem=no%10;
        no/=10; // no=no/10;
        sum= sum + rem *rem *rem;
    }
    if( sum==ono)
       printf("%d is armstrong no", ono);
    else   
        printf("%d is not armstrong no", ono);
        
    return 0;
}