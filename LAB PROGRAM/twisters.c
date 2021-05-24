#include<stdio.h>
#define NO 10
#define LEN 9
int main(void)
{
char str[3][128]={"PG-DAC","PG-DESD","PG-DMC",
"PG-DBDA","PreCat"};
printf("%d %d %d",sizeof(str),sizeof(str[LEN]) ,
sizeof(str[NO-1][LEN-1]));
return 0;
}
