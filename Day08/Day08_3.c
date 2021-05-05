#include<stdio.h>

int main()
{
    double ammount,discount;

    // if ammount is greater than or equal to ( >= ) 5000 
    // discount 10%
    printf("Enter the ammount\n");
    scanf("%lf",&ammount);
    // 5000 
    // 5000 > = 5000 
    //  T 
    //  1 
    // if(1)
    // True 
    if(ammount >=5000)
    {
        discount = ammount * 0.10;
        ammount = ammount - discount; 
    }
    printf("Ammount = %lf",ammount);
}