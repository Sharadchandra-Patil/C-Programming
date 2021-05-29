#include<stdio.h>
#define a 5
#define sq(a) a*a
int main()
{
    int x=a, y=0;
    y=sq(x); // y= x*x; y=5*5;
    printf("\n x=%d y=%d", x, y);
    y=25/sq(x); // y=25/x*x;  // y=25/5*5;  // y=5*5=25
    printf("\n x=%d y=%d", x, y);

    y=sq(x+x);//y=x+x*x+x // y=5+5*5+5; //y=5+25+5;
    printf("\n x=%d y=%d", x, y);

    #undef a
    #define a 7

    y=sq(a+a);//y=x+x*x+x // y=7+7*7+7; //y=7+49+7;
    printf("\n x=%d y=%d", x, y);
    #line 1
    printf("\n lineno=%d",__LINE__);
    printf("\n time=%s",__TIME__);
    printf("\n date=%s",__DATE__);
    printf("\n filename=%s",__FILE__);
 
   printf("\n a=%c [%d]",'a','a');
    return 0;
}