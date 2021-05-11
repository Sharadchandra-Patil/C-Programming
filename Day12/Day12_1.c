#include<stdio.h>
int main()
{
    enum operation 
    {
        ADD=1,SUB,MULT,DIV
    };

    enum operation choice;    
    int num1;
    int num2;
    int result;
    //int choice; 


    do
    {
            printf("0.Exit\n");
            printf("1.Add\n");
            printf("2.Sub\n");
            printf("3.Mult\n");
            printf("4.Div\n");

            printf("Enter the two numbers\n");
            scanf("%d%d",&num1,&num2); 

            printf("Enter the choice\n");
            scanf("%d",&choice); //1 
            switch (choice) //1 
            {
            case 1:
                result = num1 + num2;
                printf("%d",result);
                break;
            
            case 2:
                result = num1 - num2;
                printf("%d",result);
                break;
            
            
            case 3:
                result = num1 * num2;
                printf("%d",result);
                break;
            
            
            case 4:
                result = num1 / num2;
                printf("%d",result);
                break;
            
            default:
                break;
            } 
        printf("\n0 to exit and 1 to continue\n");
        scanf("%d",&choice);     
    }while(choice!=0); 


    return 0; 
}