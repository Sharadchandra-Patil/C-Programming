#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int row, col;

    for(row=1; row<=10;row++)
    {
        for(col=1; col<=row; col++)
        {
            //printf("%5d", col);
           // printf("%5d", row);
          //printf("%5c", col+64);
          //printf("%5c", row+64);
          printf("  *  " );
        }
        printf("\n");
    }
    return 0;
}