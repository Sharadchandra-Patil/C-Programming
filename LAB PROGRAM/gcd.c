#include<stdio.h>
int main()
{
    int n1,n2,rem,on1,on2;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);
    on1=n1;
    on2=n2;
    rem = n1 % n2;
    while(rem!=0)
    {
        //printf("\nrem= %d ",rem);
        n1=n2;
        n2=rem;
        rem = n1 % n2;
    }
     printf("Greatest common divisor of %d and %d  is = %d ",on1,on2,n2);
     return 0;
}
