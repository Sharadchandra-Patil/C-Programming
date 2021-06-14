#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    int cnt, lines, tabs, spaces, digits, alphabets;
             // path      mode
      fp= fopen("file1.txt","r");
    if(fp==NULL)
        printf("\n unable to open file");
    else
    {
          cnt= lines= tabs= spaces= digits= alphabets=0;
          while( (ch=fgetc(fp))!=EOF)
          {
              fputc(ch,stdout);
              cnt++;
              if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
                 alphabets++;
              else if(ch>=48 && ch<=57)
                 digits++;
              else if(ch==32 || ch==' ')
                spaces++;
              else if( ch=='\n')
                  lines++ ;
              else if(ch=='\t')
                  tabs++;  
              //getchar();
          }
          fclose(fp); //close file fcloseall();
          printf("\n %d char are added to file", cnt);
          printf("\n no of alphabets %d ", alphabets);
          printf("\n no of digits %d ", digits);
          printf("\n no of lines %d ", lines);
          printf("\n no of tabs %d ", tabs);
          printf("\n no of spaces %d ", spaces);
    }

    return 0;
}