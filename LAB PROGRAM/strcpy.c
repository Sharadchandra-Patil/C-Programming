#include<stdio.h>
#include<string.h>
// strcpt(d,s);
char* mystrcpy(char *d, const char *s);
int main()
{
    char src[40], dest[40];
    char *ptr=NULL;
    printf("\n Enter src:: ");
    scanf("%s", src);

    printf("\n Enter dest:: ");
    scanf("%s", dest);

    
    //ptr= strcpy(dest, src); // build in fun of string.h
    ptr= mystrcpy(dest, src); // user defined fun like string.h
    printf("\n ans using dest=%s", dest);
    printf("\n ans using  ptr=%s", ptr);
    return 0;
}

char* mystrcpy(char *d, const char *s)
{
    int index=0;
    while( *(s+index))
    {
          // *(d+index)= *(s+index);
           d[index] = s[index];
           index++; 
    }
    *(d+index)='\0';
    return d;
}