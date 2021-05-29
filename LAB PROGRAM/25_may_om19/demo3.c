
#include <stdio.h>
#include <stdlib.h>
typedef union test
{
    short int no;
    char name[2];
} TEST;
int main(void)
{
    TEST t; //union test t;
    printf("\n size of t=%d", sizeof(t));
    printf("\n size of TEST=%d", sizeof(TEST));
   printf("\nr=%d b=%d\n", 'r','b');
    t.name[0] ='r'; //'a'; //'A';
    t.name[1] = 'b';//'b'; //'B';
    //t.no= 16961;
    printf("\n t.name[0]=%c [%u]", t.name[0], &t.name[0]);
    printf("\n t.name[1]=%c[%u]", t.name[1], &t.name[1]);
    printf("\n t.no=%hd [%u]", t.no, &t.no);

    return EXIT_SUCCESS;
}

// A    65 00000000 01000001
// B    66 00000000 01000010

//16961    01000010 01000001
//BA

//  a   97 00000000 01100001
//  b   98 00000000 01100010

//ba       0110001001100001
//25185    0110001001100001

//r  114  00000000 01110010
//b   98  00000000 01100010
//br       0110001001110010
//25202    0110001001110010