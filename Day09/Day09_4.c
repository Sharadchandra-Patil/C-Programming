#include<stdio.h>
// enum --> user defined datatype
// int ,float, char ,double // built in  
int main()
{
    // creating a data-type
    // enum operations --> user defined 
    // int  --> built in --> int num 
    enum operations 
    {
        ADD=1,SUB,MULT,DIV
    }; 

    // int num1,num2,num3,num4,num5,num6
    // 6 variables of type int  

    enum operations e1,e2,e3;
    //datatype      variablename 
    // int          num 
    // datatype   variable-name  

    // sizeof(e1) --> 4 bytes 
    int choice;// variable declaration 

    printf("Enter the choice\n");
    scanf("%d",&e1); //1 
    //scanf("%d",&choice);

    switch (e1) //1 
    {
        case ADD:  //1 
        printf("ADD \n");
        break;
        
        case SUB:
        printf("Sub \n");
        break;
        
        case MULT:
        printf("Div \n");
        break;
        
        case DIV:
        printf("Mult \n");
        break;
 
    default:
        break;
    }

}