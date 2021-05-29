#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
    struct emp *next;
};
int main()
{
   struct emp e;
   printf("size of e=%d", sizeof(e)); // 26 on 64 bit
   // 22 on 32bit 
   
    return 0;    
}