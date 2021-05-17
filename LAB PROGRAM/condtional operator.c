#include<stdio.h>
int main(void)
{
    int no=5, n1=9, n2=9, ans;
                    // if      else
    //condition? true part : false part;
    no%2==0 ? printf("%d is even\n", no): printf("%d is odd \n", no);
    no%2 ? printf("%d is odd\n", no): printf("%d is even \n", no);

   // condition ? true part : condition ? true part : false part ;
    no>0 ?  printf("%d is +ve\n", no) : no==0 ? printf("%d is zero\n", no) : printf("%d is -ve\n", no);

    n1>n2 ? printf("\n n1(%d) is max", n1) : n1==n2 ? printf("\nn1(%d) is equal to n2(%d) ",n1, n2) : printf("\n n2 (%d) is max", n2);
    
    // max of 3
    ans = (no%2) ? printf("\n %d is odd", no) : printf("\n %d is even", no);

    printf("\n ans=%d", ans);

    (ans=no%2) ? printf("\n %d is odd", no) : printf("\n %d is even", no);

    printf("\n [ans=%d]", ans);

    return 0;
}