#include<stdio.h>


int add_numbers(int n1,int n2); //function taking arguments and return type as integer
int main(void)
{
    int res;
    res = add_numbers(50,20);
    // a call to function add_numbers() by passing two values 
    // CALL BY VALUE CONCEPT
    printf("Result : %d",res);
    return 0;
}
int add_numbers(int n1,int n2)
{
    return n1+n2;
}





/*
int accept_number(); //function declaration 
// function is returning one value 
int main(void)
{
    int n1,n2,n3,n4;
    n1=accept_number(); //function call
    // since accept_number() is returning one value there should be 
    //someone who can hold the returned value from the function
    // LOCATOR 
    n2=accept_number(); //function call
    n3=accept_number(); //function call
    n4=accept_number(); //function call
    printf("N1 : %d N2 : %d N3 : %d N4 : %d",n1,n2,n3,n4);
    return 0;
}

int accept_number()
{
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    return num;
   
}
*/



/*

void add_num(int a,int b);

int main(void)
{
    int n1,n2,n3,n4;
    printf("Enter Num1 : ");
    scanf("%d",&n1);
    printf("\n Enter Num2 : ");
    scanf("%d",&n2);
    add_num(n1,n2); //function call 2 arguments of type integer 
    printf("\n Enter Num3 : ");
    scanf("%d",&n3);
    printf("\n Enter Num4 : ");
    scanf("%d",&n4);
    add_num(n3,n4);
    
    return 0;
}


void add_num(int a,int b)
{
    printf("\n Addition of two numbers : %d",(a+b));
}


*/



/*
void add_numbers(); // function declaration
// function name : add_numbers()
//return type : void 
// no arguments 

int main(void)
{
    printf("Inside Main...");
    add_numbers(); // function call with function name 
    printf("\n Back to main..");
    add_numbers();
    printf("\n once again back to main...");
    return 0;
}

void add_numbers()
{
    int n1, n2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter second Number :");
    scanf("%d",&n2);
    printf("\n Addition = %d",n1+n2);

}

*/

