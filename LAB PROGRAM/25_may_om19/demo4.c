#include <stdio.h>
#pragma pack(1)
struct date
{
    int dd, mm, yy;
};
struct date1
{
    short int dd, mm, yy;
};
struct date2
{
    unsigned dd : 5;
    unsigned mm : 4;
    unsigned yy : 11;
};
struct date3
{
    signed dd : 6;
    signed mm : 5;
    signed yy : 12;
};
int main()
{
    printf("\n size of struct date =%d", sizeof(struct date));
    printf("\n size of struct date1=%d", sizeof(struct date1));
    printf("\n size of struct date2=%d", sizeof(struct date2));
    printf("\n size of struct date3=%d", sizeof(struct date3));

    struct date2 d2;
    //0  1   2   3                  31
    //32 33 34
    int no;
    printf("\n Enter dd :: ");
    scanf("%d", &no);
    d2.dd=no;
    printf("\n d2.dd=%d", d2.dd);
    //scanf("%d", &d2.dd);// error

    struct date3 d3;
    // -32 -31 -30                   0            30  31 
    //  32  33  34                 
    printf("\n Enter dd :: ");
    scanf("%d", &no);
    d3.dd=no;
    printf("\n d2.dd=%d", d3.dd);
    
    return 0;
}