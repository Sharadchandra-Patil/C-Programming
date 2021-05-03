#include<stdio.h>

int main()
{
    /*
    int num=100;
    double d1=12.33;
    char ch='A';

    printf("%d\n",sizeof(num+d1+ch));
    //      int + double + char
                //      double     

    printf("%d",sizeof(100+12.33+'A')); 
                // int + double + char 
                //  double     

    */
   /*
    char ch ='A';
    short int num = 100;
    printf("\n %u",sizeof(ch + num));
                // char + short
                //  int + short 
                // int          

     sizeof is evaluated at compile time
     */

    //Char types are treated as integers (ASCII values) for calculation
    printf("%d",65 + 'A');
    // int + 'A'
    // int + 65 
    // 65 + 65 
    //  130                
}