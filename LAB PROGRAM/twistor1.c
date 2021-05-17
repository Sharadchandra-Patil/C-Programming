#include <stdio.h> 
int main() 
{ 
    int a=(1,2,3); 
        //a=3
          //4    5    6
    int b=(++a, ++a, ++a); 
         // 3    4    5
          printf("\na=%d,b=%d",a,b);
              //7  //8
    int c=(b++,b++,b++);
         //6  //7   9   6  9 8  
    printf("\n%d,%d,%d",a,b,c); 

    return 0; 
} 