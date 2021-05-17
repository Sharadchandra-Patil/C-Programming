#include<stdio.h>
#include<stdlib.h>

int calculation(int n1, int n2, char op);

int main()
{
    int no1, no2, result=0, choice=0;
    char oper;

    do
    {
        printf("\n Enter No1 :: ");
        scanf("%d", &no1);

        printf("\n Enter Operator :: ");
        scanf("%*c%c", &oper);

        printf("\n Enter No2 :: ");
        scanf("%d", &no2);

        result= calculation(no1,  no2, oper);

        printf("%d  %c  %d = %d", no1, oper, no2, result);
    
        printf("\n Enter 1 to continue or 0 to eit");
        scanf("%d",&choice);
        
    }while(choice!=0);
    
    return 0;
}

int calculation(int n1, int n2, char op)
{
    int ans=0;

    switch(op)
    {
        default : printf("invalid operator");
                  exit(0);
        case '+' : ans= n1+n2; break;
        case '-' : ans= n1-n2; break;
        case '*' : ans= n1*n2; break;
        case '/' : ans= n1/n2; break;
    }


    return ans;   
}