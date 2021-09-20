#include<stdio.h>
#include<string.h>


/*
    dest -- Hello\0  
    src --> Readers\0  
    int i=0;
    int j=0; 
    while(dest[i]!='\0')
    {
        i++; 
    }
    HelloReaders   
    while(src[j]!='\0')
    {
        dest[i] = src[j]; 
        i++;
        j++;
    }

    dest[i] = '\0'; 
    return dest; 


*/

/*
char* mystrcpy(char *dest, const char *src);
int main()
{
    char src[50] = "Hello";
    char dest[50]; 
    puts("source string is");
    puts(src); 
    mystrcpy( dest, src );  
    puts( dest);    
    return 0; 
}
// src -->  H  E  L  L 0 \0 
// dest --> H  E  L  L 0 
char* mystrcpy(char *dest, const char *src)
{
    int i=0; 
    while(src[i]!='\0')// *( src + i )
    {
            dest[i] = src[i]; 
            i++; 
    }
    dest[i] = '\0'; 
    return dest; 

}
*/ 


/*
int main()
{
    char src[50] ="Hello";
    char dest[50]; 

    puts("Source string is ");
    puts(src); 

    strcpy(dest,src); 

    puts("Destination string is ");
    puts(dest); 

    return 0; 
}
*/
/*
int mystrlen(const char *s); 
int main()
{
    char name[10]="Hello";
    int result; 
    result = mystrlen(name); 
    printf("result = %d",result); 
    return 0;
}
// H  E   L   L   0  \0 
int mystrlen(const char *s)
{
        int i = 0;
        while(s[i]!='\0')
              i++; 
        return i;  
}
*/ 

int main()
{   
     int num1=10;
    char *ptr = "Sunbeamss"; 
    char name[] = "sharad patil"; 
    char *ptr2 =name;
    scanf("%s",name);
    printf("\n%d",sizeof(ptr2));
   printf(name);
    printf("\n%d\n",strlen(name));
    printf("%d\n",strlen(ptr)); 
    printf("size= %d",sizeof(name));

}
