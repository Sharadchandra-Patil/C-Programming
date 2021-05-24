#include<stdio.h>
int main()
{
    char ch[]="sunbeam pune";

    printf("\n%s", ch);
    printf("\n%s", ch+8);

    printf("\n%c", *(ch+8));
    printf("\n%c", ch[8]);
    return 0;
}