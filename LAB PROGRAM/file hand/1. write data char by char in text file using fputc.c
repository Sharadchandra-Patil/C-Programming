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
int main()
{
    FILE *fp=NULL;
    char ch;
    int cnt;
             // path      mode
    //fp= fopen("file1.txt","w");
      fp= fopen("file1.txt","a");
    if(fp==NULL)
        printf("\n unable to open file");
    else
    {
          cnt=0;
          while( (ch=fgetc(stdin))!=EOF)
          {
              fputc(ch,fp);
              cnt++;
          }
          fclose(fp); //close file fcloseall();
          printf("\n %d char are added to file", cnt);
    }

    return 0;
}
// 
//ABCDE