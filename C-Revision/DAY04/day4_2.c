#include<stdio.h>
int main(void)
{
    char str[20];
    printf("Enter Name :");
   // scanf("%[^\n]s",str); // scan set 
    // read the string upto the occurace of \n
    //scanf("%[^.]s",str); 
    scanf("%[A-Z]s",str); 
    printf("\n Name : %s",str);
    return 0;
}