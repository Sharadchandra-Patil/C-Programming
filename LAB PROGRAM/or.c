#include <stdio.h>
int main(int argc, char *argv[])
{
  int i=0, j=1, ans=0;
    // F          2 T  
    //    0       1 
     ans= i++ || ++j;
     // T                        1   2   1
    printf("\n i=%d j=%d ans=%d", i, j, ans);
   return 0;
}
// or 
// T  T T 
// T  F T
// F  T  t
// F  F  F
