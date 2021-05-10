#include<stdio.h>


// nested loops
// if want to write a loop inside a loop  
int main()
{
    int i;
    int j;  
/*
    for(i=1;i<=5;i++)
    {
        printf("For each i:%d\n",i); 
        for(j=1;j<=5;j++)
        {
            printf("j:%d\n",j);
        }  
    }
*/
/*
    for(i=1;i<=5;i++);// terminator 
    

    // independent statement 
    {
        printf("For each i:%d\n",i); 
        for(j=1;j<=5;j++)
        {
            printf("j:%d\n",j);
        }  
    }

*/
    /*
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d\t",i*j);

        }
        printf("\n"); 
    }
    // upper --> 2 
    // lower --> 6 
    // 2 to 6 
    */
/*
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    
    */

    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        // *****
        // ****
        // ***
        // **
        // *    
        printf("\n"); 
    }
    /*
        *****
        ****
        ***
        **
        * 
    */

    return 0; 
}