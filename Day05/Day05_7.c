#include<stdio.h>

int main()
{
    /*
    int num;
    printf("Enter the number\n");
    scanf("%d",&num); // scanf is a function 

    printf("num = %d\n",num); 
   */
 
  /*
    int num1,num2;
    printf("Enter the number");
    scanf("%d",&num1); // scan the num1 

    
    printf("Enter the number");
    scanf("%d",&num2); //scan the num2 

    printf("%d%d",num1,num2); 

 */
/*
    int num1,num2;
    float f_var; 

    printf("Enter the 2 numbers\n");
    scanf("%d%d%f",&num1,&num2,&f_var); 

    printf("num1 = %d \n num2=%d \n fvar=%f",num1,num2,f_var);

*/
        int num1,num2;
        int result; 

        printf("Enter the num1\n");
        scanf("%d",&num1);// 10 

        // &num1 --> 10 

        printf("Enter the num2\n");
        scanf("%d",&num2);// 11 
        // &num2 = 11 

        result = num1 + num2; 
        // result = num1 + num2 
        // 21 

        printf("Result is %d",result);


            

    return 0;
}
// what if i want to take i/p 
// waht if i want to scan the value 