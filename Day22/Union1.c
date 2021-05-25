/*
 ============================================================================
 Name        : 8.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



/*union test
{
	int a;
	float b;
	double c;
};

int main(void)
{
	union test t1;

	printf("%d",sizeof(t1));
	return 0;
}*/

/*
 ============================================================================
 Name        : 8.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*


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

//	4-->  00000100
//	8-->  00001000

//  00001000 00000100

*/
/*
 ============================================================================
 Name        : 8.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct
{
	short s[5];
	union
	{
	char x;
	float y;
	long z;
	short int z1;
	}u;
}t;
int main(void) {
	printf("\n Size of Structure =%u",sizeof(t));
	printf("\n Size of Union =%u",sizeof(t.u));
	printf("\n Size of Structure + union=%d",sizeof(t)+sizeof(t.u));
	return 0;
}


