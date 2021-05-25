#include<stdio.h>
union testUnion
{
short int num;
char ch[2];
};
int main()
{
union testUnion ut;
ut.ch[0]=4;
ut.ch[1]=8;
printf("%d", ut.num);
return 0;
}
