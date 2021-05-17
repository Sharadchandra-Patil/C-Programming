#include<stdio.h>
extern int no2; // decl of gloabl variable
int main(void)
{
    printf("\n no2=%d [%u]", no2, &no2);   
    return 0;
}
int no2=100; // defination of global variable