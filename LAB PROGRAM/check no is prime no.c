#include<stdio.h>
#include<stdlib.h>
int main(void)
{

    int no, counter;

    printf("\n Enter No:: ");
    scanf("%d", &no);

    counter=2;
    while(counter<no)    
    {
        if(no%counter==0)
           break;
        counter++;
    }
    if(counter==no)
        printf("\n %d is prime", no);
    else
        printf("\n %d is not prime", no);
    return 0;
}