#include<stdio.h>

int main()
{
    int b = 3;
    int ans; 

    //ans = ( b++ , b++ , b++ );
    //      3   , 4   , 5 
    // 6 
    // ++ --> post increment 
    // , --> comma opr 
    // ( )
    //ans =  ( ++b , ++b , ++b) ;
    //ans =   ++b , ++b , ++b ;
    printf("ans=%d b=%d",ans,b);

}