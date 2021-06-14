#include<stdio.h>
#define SIZE 10
int main()
{
    FILE *fp=NULL;
    char str[SIZE];
             // path      mode

      fp= fopen("file1.txt","r");
    if(fp==NULL)
        printf("\n unable to open file for read");
    else
    {
          
          while( fgets(str, SIZE, fp)!=NULL)
          {
              fputs(str,stdout ); // print data on console
              getchar();
          }
          fclose(fp); //close file fcloseall();
          printf("\n data read from file");
    }

    return 0;
}