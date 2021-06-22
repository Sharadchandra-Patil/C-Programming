#include<stdio.h>
int main()
{
    char ch;
    FILE *fp= fopen("file1.txt", "r");
    if(fp==NULL)
    {
        printf("\n unable to open file");
    }
    else
    {
        //fseek(fp,-1L,2); // go  to last char in file
          fseek(fp, -1L, SEEK_END);
          do
          {
              ch= fgetc(fp); // read one char
              //if(ch=='\n') // window
                //fseek(fp,-1L,SEEK_CUR)
              printf("%c", ch);
             // getchar();

          } while (!fseek(fp,-2L,SEEK_CUR));
   }

    return 0;
}