#include<stdio.h>

//1. fun decl
//output function_name(input);
//return_type function_name(data_type intput);
unsigned int factorial(int n);

int main(void)
{
    int no;
    unsigned int  result=0;

    do
    {

        printf("\n Enter No :: ");
        scanf("%d", &no);
        if(no<0)
           printf("\n invalid no \n");
    } while (no<0);
    
    
    
    result=factorial(no);// 3. function call
    //factorial(no);
   // no is actual argument
    printf(" %d!= %u\n", no, result);
    
    return 0;
}
// 2 fun defination (logic)
// n is formal argument
unsigned int factorial(int n)
{
    int counter;
    unsigned int ans;

    for(counter=ans=1; counter<=n; counter++)
    {
       ans*=counter; //ans= ans*counter;c
    }
    return ans;
}

