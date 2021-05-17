#include<stdio.h>
int main(void)
{
    int no, ono, rem, sum;

    printf("\n Armstrong no betweem 1 to 500 \n");

    for(no=1; no<=500; no++)
    {
        for(ono=no,rem=sum=0;ono!=0; ono/=10)
        {
            rem=ono%10;
            sum= sum + rem *rem *rem;
        }
        if( sum==no)
            printf("%6d", no);
    }    
    return 0;
}