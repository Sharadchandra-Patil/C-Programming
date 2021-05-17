#include <stdio.h>
int main(int argc, char *argv[])
{
   int i=1, j=0, ans=0;
     //  T         T 
     //  1       0 1 
    ans= i++ && ++j;
    // T                         2   1   1
    printf("\n i=%d j=%d ans=%d", i, j, ans);
   
   return 0;
}
// 0 f non zero t 
// &&
// T T T 
// T F F 
// F T F 
// F F F 
