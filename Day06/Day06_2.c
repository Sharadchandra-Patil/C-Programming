#include<stdio.h>

int main()
{
    float f_var=42.3;

    //printf("%f",f_var);

    //printf("%6.2f",f_var);
    //   4 2 . 3
    // - - - - - - 

    //printf("%9.3f",f_var);
    //       4 2 . 3 
    // - - - - - - - - - 

     //printf("%09.3f",f_var);
    // 0 0 0 4 2 .  
    // - - - - - - - - -  
   
    //printf("%-6.2f",f_var);
    // 4 2 . 
    // - - - - - - 

    printf("%.2f",f_var);
}

// width specifier 
/*int main()
{

    int num = 123; 
    //printf("%6d",num);// 123 is printed right justified
    //       1 2 3 
    // - - - - - - 

    //printf("%9d",num);
    //             1 2 3 
    // - - - - - - - - - 

    //printf("%09d",num);
    //             1 2 3 
    // - - - - - - - - - 

    //printf("%-6d",num);
    //1 2 3 
    //- - - - - -   

    //printf("%-9d",num);
    // 1 2 3 
    // - - - - - - - - - 


    return 0;
}*/