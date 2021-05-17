#include <stdio.h>
extern int a=10;
int main()
{
    int c = 5, no = 10;
    do {
        no /= c;
        printf("%d\n",no);
       } while(c--);
  
    printf ("%d", no);
    return 0;
}
