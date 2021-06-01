#include<stdio.h>
#define SIZE 40
int main()
{
    FILE *fp=NULL;
    char str[SIZE];
             // path      mode
    //fp= fopen("file1.txt","w");
      fp= fopen("file1.txt","a");
    if(fp==NULL)
        printf("\n unable to open file");
    else
    {
          
          while( fgets(str, SIZE, stdin)!=NULL)
          {
              fputs(str,fp ); // write data into file
          }
          fclose(fp); //close file fcloseall();
          printf("\n words are added to file");
    }

    return 0;
}