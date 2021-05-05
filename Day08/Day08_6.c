#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    // 11 2 3 
    // smallest of 3 number 
    if( a < b && a < c )
    //  1 < 2 && 2 < 3 
    //    T   &&  T 
    //        T 
    //        1   
    {
        printf("%d is smaller\n",a);
    }
    else
    {
        if( b < c)
        {
            printf("%d is smaller\n",b);
        }
        else
        {
            printf("%d is smaller\n",c);
        }
        
    }
    

}
