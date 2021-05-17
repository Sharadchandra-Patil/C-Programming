#include<stdio.h>
int main()
{
    int num,digit1,digit2,digit3,digit4;
    printf("\nPlease enter the four digit integer number : ");
    scanf("%d",&num);
    //Each digit from number separated in following way
    digit1=num%10;
    printf("\ndigit1=%d\t",digit1);

    num=num/10;
    digit2=num%10;
    printf("digit2=%d\t",digit2);

    num=num/10;
     digit3=num%10;
     printf("digit3=%d\t",digit3);
    
    num=num/10;
    digit4=num;
     printf("digit4=%d\t\n",digit4);
     
    printf("\nFace value of digit1=%d  digit2=%d  digit3=%d  digit4=%d\n ",digit1,digit2,digit3,digit4);
    
    printf("\nPlace value of digit1=%d  digit2=%d  digit3=%d  digit4=%d \n\n",digit1*1,digit2*10,digit3*100,digit4*1000);
    
    printf("Number in reverse order is = %d\n\n",(digit1*1000)+(digit2*100)+(digit3*10)+digit4);
    return 0;
}