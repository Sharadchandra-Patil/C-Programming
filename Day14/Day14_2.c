#include<stdio.h>
void sumpro(int num1 , int num2); 
int main()
{
    int a=10,b=3;
    int d;
    // auto int d  
    printf("d=%d\n",d);
    // a and b are local to the main 
    // a and b are destroy after deletion of FAR main 
    sumpro( a ,b);
    printf("Inside main a=%d b=%d\n",a,b);
    // printf("%d%d",pp,ps);
    // pp and ps are in different scope 

    {
            int c=50;
            printf("inside the block = %d\n",c);//50  

    }

    {
        int c = 50;
        {
             int c =100; 
             printf("Inside the next block = %d\n",c);  
        }
    }
    // printf("%d",c); //Error out of the scope 


   

    return 0;
}
// FAR --> function activation record 
void sumpro(int a , int b)
{
//num1 and num2 destroy after FAR of sumpro is destroyed 
    int pp,ps; 
 // pp and ps are local to the sumpro 
 // pp and ps are destroyed after FAR of sumpro is destroyed    
    ps = a + b; 
    pp = a * b;  
    printf("Inside the fun ps = %d pp=%d\n",ps,pp);
    a++; // a is local  to sumpro 
    b++; // b is local to sumpro

}