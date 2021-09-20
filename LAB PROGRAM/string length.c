#include<stdio.h>
#include<string.h>
size_t mystrlen(const char *s);
int main()
{
    char src[40];
    size_t ans;
    printf("\n Enter src:: ");
    scanf("%s", src);
    // ans= strlen(src);
    ans= mystrlen(src);
    printf("\n length of %s is %u", src, ans);
    return 0;
}
size_t mystrlen(const char *s)
{
    size_t index;
    //for(index=0; s[index]!='\0'; index++);

    for(index=0; *(s+index)!='\0'; index++)
    {

    }
    return index;
}
/*size_t mystrlen(const char *s)
{
    size_t index;
    index=0;
    while( *(s+index)!='\0')
    {
        index++;
    }
    return index;
}*/