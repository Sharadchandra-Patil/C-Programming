// seq file handling
//text 
// 1. char by char fgetc fputc
// 2. string by string fgets and fputs
// 3. record by record fscanf and fprint
// r w a r+ w+ a+

//binay file
// record by record and all fread and fwrite
// rb wb ab rb+ wb+ ab+

// random file acess
// fseek
#include<stdio.h>
#define SIZE 40
int main()
{
    FILE *fp=NULL;
    char words[SIZE];
    int cnt;
             // path      mode
    //fp= fopen("file1.txt","w");
      fp= fopen("file1.txt","r");
    if(fp==NULL)
        printf("\n unable to open file for reading");
    else
    {
          cnt=0;
          while( fscanf(fp,"%s", words)!=EOF)
          {
              cnt++;
              printf("\n %d] %s", cnt, words);
          }
          fclose(fp); //close file fcloseall();
          printf("\n %d words read from to file", cnt);
    }

    return 0;
}
// 
//ABCDE