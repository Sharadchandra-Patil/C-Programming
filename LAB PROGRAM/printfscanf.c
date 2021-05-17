#include<stdio.h>
int main(void)
{
    int no1=10, ans=0, no2;

    ans = printf(" \n%10d\t ", no1);
    printf("\n ans=%d\n", ans);

    printf("\n Enter no1 :: ");
    ans = scanf("%d", &no1);
    printf("\n ans=%d\n", ans);

    printf("\n Enter No1 and no2 ");
    ans = scanf("%d%d", &no1, &no2);
    printf("\n ans=%d\n", ans);

    // jump statements
    // break continue  return   goto

    return 0;
    
    if(no1%2==0)  // error
    {
        return 0;
        //continue;
       //break;
    }
    return 0;
}