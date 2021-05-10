#include<stdio.h>

int main()
{
        // break 

        int i = 1; 

        for(i=1;i<=10;i++)
        {
              if(i==5)
                break;
             printf("i:%d \n",i);   

        }
        printf("outside the  loop:%d",i); 

        return 0;
}
