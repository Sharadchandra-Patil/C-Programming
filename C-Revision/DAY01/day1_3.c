#include<stdio.h>

// 0.Exit 1.Add 2. Sub  3.Mul 4.Div 5.Mod
// Menu Driven ... choice based option
// do.. while along with switch 


int accept_num();
int sum(int n1,int n2);

enum options{EXIT,ADD,SUB,MUL,DIV,MOD};

int main(void)
{
    int n1,n2;
    int res;
    enum options  ch;//variable of type enum
    n1=accept_num();
    n2=accept_num();
    do
    {
    printf("\n Enter Choice :0.Exit 1.Add 2. Sub  3.Mul 4.Div 5.Mod ");
    scanf("%d",&ch);

    switch(ch)
    {
        case ADD:
           res=sum(n1,n2);
           printf("Addition : %d",res);
        break;
         case SUB:
            printf("\n Subtraction   : %d",n1-n2);
        break;
        case MUL: 
         printf("\n Multiplication   : %d",n1*n2);
        break;
        case DIV: 
         printf("\n Division   : %d",n1/n2);
        break;
        case MOD: 
         printf("\n Mod   : %d",n1%n2);
        break;
    }
    }while(ch!=EXIT);
    

    return 0;
}


int accept_num()
{
    int n;
    printf("Enter Number  :");
    scanf("%d",&n);
    return n;
}


int sum(int n1,int n2)
{
    return n1+n2;
}