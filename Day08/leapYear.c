/*Write a program to display number of days in the given year. Check condition for leap year. A year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("Please enter year you want to check whether leap year or not : ");
    scanf("%d",&year);

/* a. Without using logical operator

    if(year%400==0)
       { 
           printf("%d is a leap year.\n",year);
           //return 0; 
           exit(0);
       }
    
    if(year%100==0)
       {
           printf("%d is not a leap year.\n",year);
           return 0;
       }

     if(year%4==0)
       {
           printf("%d is a leap year.\n",year);
           return 0;
       }     
 */

/* b. using logical operator

    if(year%4==0 && year%100!=0 || year%400==0)
        {
           printf("%d is a leap year.\n",year);
           return 0; 
        }

    else
        {
            printf("%d is not a leap year.\n",year);
            return 0;
        }
*/

//c.  Using conditional operator

        (year%4==0 && year%100!=0 || year%400==0) ? printf("%d is  a leap year.\n",year) : printf("%d is not a leap year.\n",year);
         return 0;   

}
