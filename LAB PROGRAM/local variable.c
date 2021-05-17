#include<stdio.h>
int no2=100; // gloabl variable
int main(void)
{
    // decl and defination of local variable
    int no1=100; // local variable in main
    printf("\n local variable in main  no1 %d [%u]", no1, &no1);  //100
    { // block 1
        int no1=10; // local variable
        printf("\n local variable no1 from block 1 %d [%u]", no1, &no1);  //10
        {
            // block 2
            int no1=1000; // local variable
            printf("\n local variable no1 from block 2 %d [%u]", no1, &no1);  //1000
        }
     }
     printf("\n gloabl variable   no2 %d [%u]", no2, &no2);  //100
     return 0;
}