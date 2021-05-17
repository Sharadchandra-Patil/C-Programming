#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int no, rem, rev, ono;

    printf("palindrome between 1 to 500  \n ");

    for(no=1; no<=500; no++)
    {
        for(ono=no,rev=rem=0; ono!=0 ; ono/=10)
        {
            rem= ono%10;
            rev=rev*10+rem;
         }
         if(no==rev)
            printf("\t %d ", no);
    }
    return 0;
}