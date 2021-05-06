#include<stdio.h>

int main()
{
    int num1;
    int num2; 
    int result; 
    int choice; 

    printf("Enter the num1\n");
    scanf("%d",&num1);

    
    printf("Enter the num2\n");
    scanf("%d",&num2);

    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Mult\n");
    printf("4.Div\n");

    printf("Enter the choice\n");
    scanf("%d",&choice); //1 

    switch (choice) //1 
    {
    case 1:
        result = num1 + num2;
        printf("result = %d",result);
        break;
    
    case 2:
        result = num1 - num2;
        printf("result = %d",result);
        break;
        
    case 3:
        result = num1 * num2;
        printf("result = %d",result);
        break;
        
    case 4:
        result = num1 / num2;
        printf("result = %d",result);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }


}
/*
    Enter the num1 
    num1 

    Enter the num2 
    num2    

    1.Add
    2.Sub
    3.Mult
    4.Div

   Enter the choice 
   1

   --> add   



*/