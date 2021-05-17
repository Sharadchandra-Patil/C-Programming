#include <stdio.h> 
int testDemo(int, int); 
int main(void) 
{ 
    int you = 64, me = 32; 
    int we = testDemo(you, me); // 64
    printf("%d %d %d\n", me, you, we); return 0; 
}    //           64     32
int testDemo(int me, int you) 
{ 
    me = me + you;   // 64+32=96
    return me - you; // 96-32=64
    you = you - me; 
    return me + you; 
} 