#include<stdio.h>

int main()
{
    char ch;    
    printf("Enter the character");
    ch = getchar();// it will scan the character for me 
    // scanf("%c",&ch);
    // a 
    
    switch (ch) //a 
    {
        case 'A': // A --> 65 
        case 'a':
        //case 65: // duplicate not allowed 
        printf(" A or a  ");
        //36break;

        case 'B':
        case 'b':
        printf("B or b \n");
        break; 

        case 'C':
        case 'c':   
        printf("c or C \n");
        break;
        
    default:
        printf("Invalid"); 
        break;
    } 

}
