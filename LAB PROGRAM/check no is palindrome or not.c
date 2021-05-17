#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int no, rem, rev, ono;

    printf("Enter No :: ");
    scanf("%d", &no);
    
    for(ono=no,rev=rem=0; no!=0 ; no/=10)
    {
        rem= no%10;
        rev=rev*10+rem;
    }
    printf("\n ono=%d rev=%d",ono, rev);
    if(ono==rev)
       printf("\n %d is palindrome", ono);
    else
        printf("\n %d not is palindrome", ono);
    return 0;
}