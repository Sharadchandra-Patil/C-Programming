#include <stdio.h>
int main(int argc, char *argv[])
{
    int i=0, j=1, ans=0;
      //   F
     //    0    not check
     ans= i++ && ++j;
     // F                         1  1   0
    printf("\n i=%d j=%d ans=%d", i, j, ans);
   return 0;
}
// 0 f non zero t 
// &&
// T T T 
// T F F 
// F T F 
// F F F 
