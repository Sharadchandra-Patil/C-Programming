#include<stdio.h>

/*
        ncr --> n! / r! * ( n - r )! 
       input n 
       input r 
       cal n!
       cal r!
       cal ( n- r) ! 
       cal res     

*/
/*
      double ans;

      ans = sqrt(25);   

        
    number of arguments 
    type of arguments 
    order of arguments 
*/
int combination( int , int );
int factorial ( int );
int main()
{
    int res;
   // res = factorial(5);
    res = combination(5,2);  
    printf("%d",res);
    return 0; 
}
 //ncr --> n! / r! * ( n - r )! 
 // 5c2 --> 10 
    
 // API --> application programming interface --> functions 
int combination( int n, int r)
{
        int nf,rf,nrf; 
        int res; 
       nf = factorial( n );
       rf = factorial( r );
       nrf =factorial( n-r);
        
       res = nf  / ( rf * nrf); 

       return res;     

}

int factorial ( int num)
{
    int i,result=1; 
   
    for(i=1;i<=num;i++)
    {
        result = result * i;
    }
    return result; 
    
}   