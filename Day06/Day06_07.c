#include<limits.h>
#include<stdio.h>

int main()
{

    //signed char ch=128;
//    printf("%d\n",CHAR_MAX); // 127
//    printf("%d\n",CHAR_MIN); // -128 

//    printf("%d\n",ch); // -128 

        signed char ch=400; // 127 to -128
        printf("%d",ch); // 400 - 256
        // 400 - 256 --> 144 
        // 144 is not in range 
        // 144 - 256 
        // -112 // this is in range 
        
        
        // size --> 2 byte 
        
        // char --> 1 byte --> 8 bit
        // 256 
       // printf("%d\n",CHAR_MAX); // 127
       // printf("%d\n",CHAR_MIN); // -128 

        //printf("%d\n",ch); // -128 
    
    // by default it is cons as signed 
}