#include<stdio.h>
#include<string.h>


//strchr()
// used to find a character in the string

// Eg: string = Sunbeam char = S YES ==> Return me an address where the char is found

//E.g : String = Sunbeam Char = z NO ==> Return NULL 

int main(void)
{
    char *str;
    char ch;
    char *ptr=NULL;
    printf("Enter The String :");
    scanf("%s",str);
    printf("Enter Character :");
    scanf("%*c");
    scanf("%c",&ch);
    ptr=strchr(str,ch);
    if(ptr==NULL)
    {
        printf("Character is not found");

    }
    else
    {
        printf("Character is found");
    }



}


/*
int main(void)
{
    //char *str="Sunbeam";
    //sizeof(str) = 4 bytes 
    
    //char str[10]="Sunbeam";
    //sizeof(str) =  10 
    
    //char str[]="Sunbeam";
    //sizeof(str) = 8

    // exact length of string , strlen() 
    char *str="Sunbeam";
    char s2[10];
    int len;
    len=strlen(str);
    printf("Str  = %s Length = %d",str,len);

    strcpy(s2,str); // copy the contents from str to s2 
    printf("\n S2  = %s ",s2);



    
    return 0;
}

*/