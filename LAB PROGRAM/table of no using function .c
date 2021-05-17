#include<stdio.h>
#include<stdlib.h>
//void table(int n);
void table(int n)
{
    int counter;
    for(counter=1; counter<=10; counter++)
    {
        printf("\n %4d * %4d = %4d", n, counter, n*counter);
    }   
    return ;
}
int main()
{
    int no;

    printf("\n Enter No ::");
    scanf("%d", &no);

    table(no);

    return 0;
}
