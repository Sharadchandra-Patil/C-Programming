#include<stdio.h>

int main()
{

    // if want to print 65 
    // 65 decimal int
    // %d should be used 
    printf("%d\n",65);
    printf("%f\n",12.33f);
    printf("%lf\n",10.33);
    printf("%c\n",'A');
    printf("%o\n",010);
    printf("%d\n",010);  
    // octal representation of 010 in decimal %d

    // I want print decimal representation of 'A'
    printf("%d\n",'A'); //65 
    printf("%x\n",0x23); // 23

    printf("%d\n",0x23); // hex to decimal 

    printf("%u\n",12u);
    printf("%u\n",12U);

    printf("%ld\n",100L); // long
    printf("%ld",100l); // long



    return 0;
}
// 12.33 --> by default it is considered as double 
// 12.33f--> now it is a float value 