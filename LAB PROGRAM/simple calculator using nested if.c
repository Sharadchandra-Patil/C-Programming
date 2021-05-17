#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no1, no2, ans;
    char op;

    printf("\n Enter No1 :: ");
    scanf("%d", &no1);

    printf("\n Enter operation :: ");
    scanf("%*c%c", &op);
    
    printf("\n Enter No2 :: ");
    scanf("%d", &no2);

    ans=0;

    if(op=='+')
       ans= no1+no2;
    else if(op=='-')
       ans= no1-no2;
    else if(op=='*')
       ans= no1*no2;
    else if(op=='/')
    {
        if(no2==0)
        {
             printf("can not divide by zero");
             return 0; // exit(0);
        }
        else
           ans= no1/no2;
    
    }
    else
    {
        printf("invalid op");
        exit(0); // return 0;
    }
     printf("%d %c %d =%d", no1, op, no2, ans);


  


    

    return 0;
}