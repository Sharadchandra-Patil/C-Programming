#include<stdio.h>

int main()
{
    // continue
    int i=2;

    for(i=2;i<=10;i++)
    {
        if(i%2==0)
          continue; 
        printf("i:%d\n",i); //3 
    }    

    return 0; 
}
