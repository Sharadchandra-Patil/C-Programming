
#include<stdio.h>
#include<stdlib.h>
float calculator(int ,char ,int);
int n2;

int main()
{
    int num1,choice;
    float result;
    char oprt;
do
{
    printf("Enter number 1:");
    scanf("%d",&num1);

    printf("Enter operator:");
    scanf("%*c%c",&oprt);
    
    printf("Enter number 2:");
    scanf("%d",&n2);
    
    result=calculator(num1,oprt,n2);
    printf("\n %d  %c  %d  =  %f \n",num1,oprt,n2,result);

    printf("\nEnter   1  To Continue    OR    0  To Exit : ");
    scanf("%d",&choice);

} while (choice!=0);

    return 0;
}

float calculator(int n1, char op , int n3)
{    
    n2=n3;
    float ans=0.00;
    switch(op)
    {
        case '+': ans=n1 + n2; break;
        case '-': ans=n1 - n2; break;
        case '*': ans=n1 * n2; break;
        case '/': if(n2==0)
                   {
                       printf("\nDenominator never be zero.\nRe-enter value for number 2 :");
                       scanf("%d",&n2);
                   }
                  ans= (float)n1 / n2; 
                  break;
        default :
            printf("Invalid operator.");
            exit(0);
    }
   return ans;
}
