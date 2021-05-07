#include<stdio.h>

int main()
{
    // for loop 
    // entry controlled loop 

    

    /*
            for(step1;step2;step4)
            {
                step3
            }
    // step1 is done only once 
    */

/*
int i=1;
    for(i=1;i<=5;i++)
    {
        printf("Inside the loop i:%d\n",i);
        //1 2 3 4 5
    }
     printf("Outside  the loop i:%d\n",i);
*/
/*
    int i=1;
    for(;i<=5;i++)
    {
        printf("Inside the loop i:%d\n",i);
        //1 2 3 4 5
    }
     printf("Outside  the loop i:%d\n",i);
*/
/*
    int i=1;
    for(i=1;i<=5;)
    {
        i++; 
        printf("Inside the loop i:%d\n",i);
        //1 2 3 4 5
    }
     printf("Outside  the loop i:%d\n",i);
*/
/*
    int i=1; 
    for(i=1;;i++)
    {
        i<=5;  // not allowed 
        printf("Inside the loop i:%d\n",i);
       
    }
     printf("Outside  the loop i:%d\n",i);

*/
      int i,j;

      for(i=1,j=1;i<=5,j<=10;i++,j++)
      {
          printf("i:%dj:%d\n",i,j);
      }



    return 0;
}