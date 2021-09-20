#include<stdio.h>
int main()
{

    // if want to print 65 
    // 65 decimal int
    // %d should be used 
   // printf("%d\n",65);
   // printf("%.2f\n",12.33f);
    //printf("%.8lf\n",10.3312121212121212);
    //printf("%c\n",'A');
    printf("%#o\n",0101);
    printf("%d\n",0101);  
    // octal representation of 0101 in decimal %d

    // I want print decimal representation of 'A'
  //  printf("%d\n",'A'); //65 
    printf("%x\n",0x10); // 23

    printf("%d\n",0x10); // hex to decimal 

   /* printf("%u\n",12u);
    printf("%u\n",12U);

    printf("%ld\n",100L); // long
    printf("%ld",100l); // long
*/


    return 0;
}
// 12.33 --> by default it is considered as double 
// 12.33f--> now it is a float value 