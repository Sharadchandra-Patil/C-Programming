#include<stdio.h>
#include<string.h> 

/*
    if(result == 0)
        printf("same");
    else
        printf("not same"); 

    ABC\0
    abc\0

int mystrcmpi(const char *s1, const char *s2)
{
        int i = 0;
    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]==s2[i] ||s1[i] -s2[i] == 32 ||s1[i] -s2[i] == -32 )
                i++; 
        else 
                return ( s1[i] - s2[i]); 
    }    

    return 0; 

}     

*/ 

/*int mystrcmp(const char *s1, const char *s2);
int main()
{
    char str1[20];
    char str2[20]; 

    int result; 

    puts("Enter the string1");
    gets(str1); 

    
    puts("Enter the string2");
    gets(str2);

    result = mystrcmp(str1,str2);

    if(result == 0 )
        printf("same");
    else
        printf("not same");             
        
}
*/
//ABC\0 
//ABC\0 
int mystrcmp(const char *s1, const char *s2)
{
    int i=0; 
    while(s1[i]!='\0' || s2[i]!='\0')
    {
            if(s1[i]!=s2[i])
                return(s1[i]-s2[i]);
            i++;   
    } 
    return 0; 

}

/*
int main()
{
    char str1[20];
    char str2[20]; 

    int result; 

    puts("Enter the string1");
    gets(str1); 

    
    puts("Enter the string2");
    gets(str2);

    result = strcmp(str1,str2);

    if(result == 0 )
        printf("same");
    else
        printf("not same");             
     

    return 0; 
}
*/