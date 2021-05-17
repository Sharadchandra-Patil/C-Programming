#include<stdio.h>
int main() 
{ 
    int no1, rem1, rem2, rem3, rev=0, ono;


    printf("\n Enter No:");
    scanf("%d", &no1);

    if((no1>=100 && no1<=999))
    {
        ono=no1;
        rem1=no1%10; // 123%10 rem1=3 
        no1/=10;     // no1=no1/10; // 123/10 ==12 
    
        rem2=no1%10; // 12% 10  ==rem2=2 
        no1/=10;     // 1 /10 ==12 
    
        rem3=no1%10; //1 %10  rem3=1 
        no1/=10;     // 12/10  0
    
        rev=rem1*100+rem2*10+rem3;
        printf("\n rev=%d", rev);
        
		if(ono==rev)
           printf("\n %d is palindrome", ono);
        else
           printf("\n %d is not palindrome", ono);
    }
    else
    {
       printf("Enter 3 digit no");
    }
    
    
    return 0; 
        
} 
