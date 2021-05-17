#include <stdio.h> 
int no1 = 17, no2 = 71; 
void swapping(void) 
{ 
    printf("\nint swap %d [%u] %d [%u] ", no1, &no1 , no2, &no2);
    int temp = no2; no2 = no1; no1 = temp; 
    printf("\nin swap %d [%u] %d [%u] ", no1, &no1 , no2, &no2);
} 
int main(void) 
{ 
    int no1 = 17, no2 = 71; 
    printf("\n in main %d [%u] %d [%u] ", no1, &no1 , no2, &no2); 
    swapping();
    printf("\nin main %d [%u] %d [%u] ", no1, &no1 , no2, &no2);
    return 0; 
} 