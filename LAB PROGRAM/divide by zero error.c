#include <stdio.h> 
int main() 
{ 
    int c = 5, no = 10; 
    do 
    { 
        no /= c; 
        printf ("no=%d c=%d\n", no,c); 

    } while(--c); 
    printf ("%d\n", no); 
    return 0; 
} 