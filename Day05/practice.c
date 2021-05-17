#include<stdio.h>
int main(void)
{
	
//printf("sizeof long is = %d\n",sizeof(long long));
//unsigned short int a =10;
//printf("%hu\n",a);	
char value1=0x32;
char value2=064;
unsigned char value=0x8+016+128 ;
unsigned char  value3 = 0x8 + 016 + 128 - value1 + value2;
printf("value=%-8d \n",value );
printf("value1=%d \n",value1 );
printf("value2=%d \n", value2 );
printf("value3=%d \n", value3 );

/*float value1=3+0.34+12.66+2.67;
int value2=064;
float value3 = 0x8 + 016 + 128 - value1 + value2;
printf("value1=%f \t", value1 );
printf("value2=%d \t", value2 );
printf("value3=%f \n", value3 );
*/
return 0;
}
