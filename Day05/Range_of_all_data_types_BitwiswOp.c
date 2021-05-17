\/**
 * C program to find range of data type
 */

#include <stdio.h>
#include<math.h>

void printUnsignedRange(int bits)
{
   	unsigned long long to=pow(2,bits);
    printf("0 to %llu \n\n",to-1);
    
    //to = (1LLU << (bits - 1)) + ((1LLU << (bits - 1)) - 1);
    //printf("0 to %llu \n\n",to);  
}

void printSignedRange(int bits)
{
    
    
    long long from  = -(1LL << (bits - 1));
    long long to    =  (1LL << (bits - 1)) - 1;
    
    printf(" %lld to %lld\n\n", from, to);
}

int main()
{
    printf("Range of char =");
    printSignedRange(sizeof(char)*8);
    
    printf("Range of unsigned char =");
    printUnsignedRange(sizeof(unsigned char)*8);
    
    printf("Range of short =");
    printSignedRange(sizeof(short)*8);
    
    printf("Range of unsigned short =");
    printUnsignedRange(sizeof(unsigned short)*8);
    
    printf("Range of int =");
    printSignedRange(sizeof(int)*8);
    
    printf("Range of unsigned int =");
    printUnsignedRange(sizeof(unsigned int)*8);
    
    printf("Range of long =");
    printSignedRange(sizeof(long)*8);
    
    printf("Range of unsigned long =");
    printUnsignedRange(sizeof(unsigned long)*8);
    
    printf("Range of long long =");
    printSignedRange(sizeof(long long)*8);
    
    printf("Range of unsigned long long =");
    printUnsignedRange((sizeof(unsigned long long)*8));
    
    return 0;
}
