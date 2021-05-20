#include<stdio.h>
#include<string.h> 

char* mystrrev(char *s);

int main()
{
    char str[20];
    puts("Enter the string"); 
    gets(str); 

    mystrrev(str); 
    puts(str);

    return 0; 
}
// temp = 0
// 0 E L L H \0
//   j   i    
//    

// 
char* mystrrev(char *s)
{
        int i=0,j=0;
        char temp; 

        // H E L L O \0 
        // O L L E H \0   i 
        while(s[i]!='\0')
        {
                i++;  
        }    
        i--; 
        while(i>j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp; 
            j++;
            i--; 
        }
        return s; 

}
/*
int main()
{
    char str[20]; 
    puts("Enter the string");
    gets(str); 

    strrev(str); 
    puts("After the reverse the string is ");
    puts(str);
}
*/