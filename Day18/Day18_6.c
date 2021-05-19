#include<stdio.h> 
 

int main() 
{
    // initializer list 
    char str1[5] ={ 'A','B','C','D','E' };
    // str1 is character array not a string 
    char str2[5] ={ 'A','B','C','D','\0' };  // 4 char + 1 null character
    // str2 is a character array with '\0'
    // str2 is string 
    // initializer list 
    int i;

    char str3[5] ={ 'A','B','C' };  
    // partial declaration 

    char str4[5] ={ 'A','B','\0','D','E' }; 

    char str5[5] ={ '\0','B','\0','D','E' };
    char str6[5] ={ 'A','\0','C','\0','E' }; 
    char str7[] ={ 'A','B','C','D','E','\0' }; 

     


    /*for(i=0;str7[i]!='\0';i++)
         putchar(str7[i]);   
    */ 

    /*
     for(i=0;str6[i]!='\0';i++)
        putchar(str6[i]);   
    */
    /*    
    for(i=0;str4[i]!='\0';i++)
        putchar(str3[i]);
    */
    /* 
    for(i=0;str3[i]!='\0';i++)
        putchar(str3[i]);
    */
    /*
    for(i=0;str2[i]!='\0';i++)
        putchar(str2[i]);
    */
    /*for(i=0;i<5;i++)
        putchar(str1[i]);
    */

    return 0;

}