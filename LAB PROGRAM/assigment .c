
#include<stdio.h>
int main() 
{ 
    int no1, rem1, rem2, rem3, rem4;
    
    printf("\n Enter No:");
    scanf("%d", &no1);
    
    rem1=no1%10; // 1234%10 ==4 rem1=4 
    no1/=10;     // no1=no1/10; // 1234/10 ==123 
    
    rem2=no1%10; // 123% 10  ==rem2=3 
    no1/=10;     // 123 /10 ==12 
    
    rem3=no1%10; //12 %10  rem3=2 
    no1/=10;     // 12/10  1 
    
    rem4=no1%10;  // 1%10 == rem4 =1 
    
    printf("\n %d + %d +%d +%d", rem1*1 , rem2*10, rem3*100, rem4*1000);
    
    printf("\n %d + %d +%d +%d", rem1*1000 , rem2*100, rem3*10, rem4*1);
    printf("\n %d", rem1*1000+ rem2*100+ rem3*10+ rem4*1);
    
    return 0; 
        
} 
