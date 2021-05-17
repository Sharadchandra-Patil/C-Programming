#include <stdio.h>
int main(int argc, char *argv[])
{
  int i=0, j=1, ans=0;
     //   1 T 
     //     0    no check
      ans= ++i || ++j;
      //                             1  1   1
      printf("\n i=%d j=%d ans=%d", i, j, ans);
   return 0;
}
// or 
// T  T T 
// T  F T
// F  T  t
// F  F  F