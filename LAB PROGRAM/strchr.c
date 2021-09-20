#include<stdio.h>
#include<string.h>
char* mystrchr( char *s, int find);
int main()
{
    char src[40], f;
    char *ptr=NULL;
    printf("\n Enter src:: ");
    scanf("%s", src);

    printf("\n enter char to search:: ");
    scanf("%*c%c", &f);
    
    //ptr= strchr(src, f); // build in fun of strig.h
    ptr= mystrchr(src, f); // user defined fun like string.h
    if(ptr!=NULL)
        printf("\n %c is found in %s at %d location", f, src, ptr-src);
    else
        printf("\n %c is not found in %s", f, src); 
    
    return 0;
}
char* mystrchr( char *s, int find)
{
    int index;
    s[1]='d';
    for(index=0; s[index]!='\0' ; index++) //for(index=0; *(s+index)!='\0' ; index++)
    {
       if(s[index]==find) // if(*(s+index)==find)
           return &s[index];   //return s+index;
    }
    return NULL;
}