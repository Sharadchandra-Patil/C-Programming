#include <stdio.h> 
int main() 
{ 
    int a=(1,2 ,3);
    int b,c; 
      //3   4    5
    b=++a, ++a, ++a; 
      //4    5    6      6 4
    printf("\na=%d,b=%d",a,b);
       //4  5  6
    c=b++,b++,b++;
    //4    5    7       6 7 4                
    printf("\na=%d,b=%d,c=%d",a,b,c); 

    return 0; 
} 