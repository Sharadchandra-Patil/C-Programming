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

    printf("%u \n",arr);
    // base address of arr 

    
    printf("%u \n",arr+1);
    // arr + 1 --> prints the address of  row [1]
    // arr + 1 * 12 
    // arr + 12  
    
    printf("%u \n",arr+2); 
    // arr + 2 --> prints the address of  row [1]
    // arr + 2 * 12 
    // arr + 24
    // baseaddress + 24 

    printf("\n\n");    

    printf("%u\n",*(arr));
    // *(arr) --> value inside arr
    // address i.e base address 
    // base address of arr

    printf("%u\n",*(arr+1));
    //*(arr+1)
    //*(100+1)
    //*(112)
    // value at 112 is address of arr[1][0]    


    printf("%u\n",*(arr+2));    

    printf("\n\n");

     printf("%u\n",**(arr));
    
    printf("%u\n",*(*(arr+1)));


    printf("%u\n",*(*(arr+2)));    
    //*(*(arr+2))
    // *(arr+2) --> it will give address of arr[0][2]
    // * ( arr[0] [2] )
    // 7   




    return 0 ;
}

// arr
/*         1          2           3
        6422260     6422264     6422268 

          4           5           6  
        6422272     6422276     6422280

          7           8           9  
        6422284     6422288     6422292 

    *(arr+1) --> *( 6422260  + 1 )
            -->  6422272

    *(*(arr+1)) --> *(*( 6422260  + 1 ))
                    * (6422272)
                    *  4   


*/