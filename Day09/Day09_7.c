#include<stdio.h>
/*int main()
{
    int num;
    
    // typedef --> creates the alias 
    // alias --> nickname 

    typedef int INT;

    // typedef char CH 
    // typedef float FLOAT
    // int --> INT
    // INT will be same as int

    // int num1 <--> INT num1

    INT num1,num2,num3; 
    num1 = 100;
    printf("%d",num1);  
        


}*/

int main()
{
    enum colors
    {
        RED,BLUE,GREEN,YELLOW
    };
        
    enum colors c1; 
    // datatype variable-name 

    // int num;
    // typedef int INT 
    // INT n1,n2,n3 

    typedef enum colors e_t;
    //  Data-type       alias-name 

    //enum colors 
    //typedef enum colors e_t   
    // e_t e1,e2,e3

    e_t e1,e2,e3;
    // INT n1,n2,n3  

    e1 = GREEN;
    printf("%d\n",e1);


}