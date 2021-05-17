#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int no1, no2, ans, choice;

    do
    {
        printf("\n Enter No1  :: ");
        scanf("%d", &no1);
        printf("\n Enter No2  :: ");
        scanf("%d", &no2);
        printf("\n 1. Add \n 2. Minus \n 3. Div \n 4. Multiply \n . Exit ");
        printf("\n Enter your Chocie   :: ");
        scanf("%d", &choice);

        ans=0;

        switch(choice)
        {
            default : printf("\n Invalid case ") ; 
                continue;
            case 1: //add
                ans= no1+no2; break;
            case 2: //minus
                ans= no1-no2; break;
            case 3: //div
                ans= no1/no2; break;
            case 4: //multiply
                    ans= no1*no2; break;
        }
        printf("\n ans=%d", ans);
       
       printf("\n Enter 1 to continue or 0 to exit :: ");
       scanf("%d", &choice);

    }while(choice!=0);
    
    return 0;
}