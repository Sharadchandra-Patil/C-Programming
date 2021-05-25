#include<stdio.h> 

int main()
{   
    FILE *fptr; 
    char ch; 

    fptr = fopen("Sunbeam.txt","w");

    if(fptr==NULL)
    {
        printf("Unable to create");
        return 0; 
    } 

    printf("\n Specify the char"); 

    while( ( ch =getchar())!='Q')
    {
       fputc(ch,fptr);  
    }

    printf("\n Success"); 

    fclose(fptr); 

    return 0;
}