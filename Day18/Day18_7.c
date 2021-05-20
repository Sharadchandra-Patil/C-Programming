#include<stdio.h>

int main()
{
    char str1[7] = "Sunbeam";
    // str1 is a character array
    char str2[8] = "Sunbeam"; 
    // str2 is string literal constant 
    // str2 has 7 character + 1 null character  
       /*
        int i;
         for(i=0;str2[i]!='\0';i++)
        putchar(str2[i]);
    */ 
   int i;
   char str3[8] ="AB\0CD";
   char str4[10]; 
   
   // printf("size = %d\n",sizeof(str4));
   for(i=0;i<5;i++)
       str4[i]=getchar();
  /*
   for(i=0;str3[i]!='\0';i++)
        putchar(str3[i]);
*/

    
    for(i=0;i<5;i++)
        putchar(str4[i]);
    
}