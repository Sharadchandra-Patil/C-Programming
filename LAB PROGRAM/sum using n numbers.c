#include<stdio.h>
int sum(int no);
int main()
{
    int n, ans;
    printf("\n Enter n :: ");
    scanf("%d", &n);
    ans= sum(n);
    printf("\n ans=%d ", ans);
    return 0;
}
int sum(int no)
{
    int a=0;
    printf("\n sum(%d)", no);
    if(no==1)
    {
       a=1;
       printf("\n sum(%d) a=%d", no, a);
       return a;
    }
    else
    {
       a= no + sum(no-1); //correct
        //a= no + sum(--no); // diff
        //a= no + sum(no--); // stack overflow
        printf("\n sum(%d) a=%d", no, a);
        return a;
    }
}  

/*
   sum of n numbers
   no =5 
   sum= no + no-1  till no == 1
   5+4+3+2+1
*/
/*
    power=  
     base * power(base , index-1);  till index==0
 */

// fact =
// no* fact(no-1);
