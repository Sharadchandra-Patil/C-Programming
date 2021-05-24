#include<stdio.h>
int main( void )
{
char num1='A';
short int ch=101;
double num2=10.24;
printf("\n size(1)=%d\n",sizeof(1));
printf("\n size(A)=%d\n",sizeof('A'));
printf("\n size(1.2)=%d\n",sizeof(1.2));
printf("\n size(1.2f)=%d\n",sizeof(1.2f));
int value =sizeof(num1)+sizeof(ch)+sizeof(num2);
printf("value=%-8d", value);
int Value =sizeof(1)+sizeof('A')+sizeof(1.2);
Value+= sizeof(10.2F);
printf("Value=%-8d", Value);
printf("Result=%-8.2f",value + Value /8.0f);
printf("\nResult=%-8.2f",3+3.4+5);
return 0;
}
