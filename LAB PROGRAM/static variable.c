#include<stdio.h>

void fun()
{
    int no1=10;
    //static int no2=no1;  // error
    //static int no2; // zero allowed

   static int no2=10;  // allowed
     //no2=10;
    printf("\n in fun no2=%d [%u]", no2, &no2);   
    printf("\n in fun no1=%d [%u]", no1, &no1);   
    no2++;
    no1++;
    return;
}
int main(void)
{
    
    fun();
    fun();
    fun();

    return 0;
}