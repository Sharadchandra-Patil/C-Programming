#include <stdio.h>
int main(int argc, char *argv[])
{
   int i=0, j=1,k=1, ans=0;
     //   1nd
     //   0        not check
    ans= ++i || ++j && k++;
       // ==    ==========
       //                              1  1 1  1
    printf("\n i=%d j=%d k=%d ans=%d", i, j,k, ans);
   return 0;
}
// or 
// T  T T 
// T  F T
// F  T  t
// F  F  F