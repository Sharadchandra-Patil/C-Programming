#include<stdio.h>

int main()
{
     int num;
     printf("Enter the number");
     scanf("%d",&num); // 1    
    // switch statement

    switch(num) // 1 
    {
            case 1:
            printf("One\n");
            break;

            
            case 2:
            printf("Two\n");
            break;
            
            case 3:
            printf("Three\n");
            break;
            
            case 4:
            printf("Fourth\n");
            break;

            default:
            printf("Invalid\n");
    } 

    printf("Outside the switch statment\n");

    return 0;



}