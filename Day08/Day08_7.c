#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    /*
        if(num==1) print1 
        if(num==2) print2
        if(num==3) print3
        if(num==4) print4 
    */

   // else - if ladder 
    if(num==1)
    {
        printf("One\n");
    }
    else if(num==2)
    {
        printf("Two\n");
    }
    else if(num ==3)
    {
        printf("Three\n");
    }
    else if(num == 4)
    {
        printf("Four\n");
    }
    else 
    {
        printf("Invalid number");
    }


    return 0;
}