#include<stdio.h>
int bin(int n);
int main(void)
{
   int no, ans;

   printf("\n Enter No :: ");
   scanf("%d", &no);
   ans= bin(no);
   printf("\n ans=%d", ans);
   return 0;

}
int bin(int n)
{
    int a=0;
   if(n==1)
   {    printf("\n n=%d a=1", n);
      return 1;
   }
    else   
    {
        a= bin(n/2)*10 + n%2;
        printf("\n n=%d a=%d", n,a);
        return a;
    }
}