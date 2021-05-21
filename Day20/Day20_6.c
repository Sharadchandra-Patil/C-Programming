#include<stdio.h> 

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9}; 
    int r,c;
   for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%u ",&arr[r][c]);
        }
        printf("\n");
    }
    
        /*      [0]    [1]   [2]
        [0]      1      2     3       
                100    104   108

        [1]      4      5     6      
                112    116  120

        [2]      7      8     9
                124    128   132 
    */

    int *ptr[3] = { arr , arr + 1 , arr+2};

    printf("\n\n");

    printf("%u\n",ptr[0]);
    printf("%u\n",ptr[1]);
    printf("%u\n",ptr[2]);

    printf("\n");
    printf("%u\n",*(ptr+0));
    // *(ptr+0)
    // *  
     printf("%u\n",*(*(ptr+0)));
     printf("%u\n",*(*(ptr+1)));
     printf("%u\n",*(*(ptr+2)));


}