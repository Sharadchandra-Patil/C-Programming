#include<stdio.h>
int myfact( int num); 
int main()
{
    int num = 5; 
    int result; 

    result = myfact(num);     
    printf("result = %d\n",result);
    return 0; 
}

int myfact( int num)
{
        if(num==0)
            return 1;
        else 
           return  num * myfact ( num - 1); 
}