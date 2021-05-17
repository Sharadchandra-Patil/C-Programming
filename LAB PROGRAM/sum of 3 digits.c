#include<stdio.h>
int main() 
{ 
    int no1, rem1, rem2, rem3, sum=0;


    printf("\n Enter No:");
    scanf("%d", &no1);

    if((no1>=100 && no1<=999))
    {
        rem1=no1%10; // 1234%10 ==4 rem1=4 
        no1/=10;     // no1=no1/10; // 1234/10 ==123 
    
        rem2=no1%10; // 123% 10  ==rem2=3 
        no1/=10;     // 123 /10 ==12 
    
        rem3=no1%10; //12 %10  rem3=2 
        no1/=10;     // 12/10  1 
    
        sum=rem1+rem2+rem3;
        printf("\n sum=%d", sum);
    }
    else
    {
       printf("Enter 3 digit no");
    }
    
    
    return 0; 
        
} 
