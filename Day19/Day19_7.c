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

int main(int argc,char *argv[],char* envp[])
{

	// 1 + 2

	/*
         '1' --> int   
	 *
	 * argv[0] --> program name
	 *
	 * argv[1]---> 1
	 *
	 * argv[2]--> +
	 *
	 * argv[3]-->2
	 *
	 */

		int num1;
		int num2;
		char op;
		int ans;

		num1 = atoi(argv[1]); // '1' --> 1 
		op = *(argv[2]);  // + 
		num2=atoi(argv[3]); // '3' --> 3 

		switch (op)
		{
			case '+':
				ans = num1 + num2;
				break;
			case '-':
				ans = num1 - num2;
				break;
			case '*':
				ans = num1 * num2;
				break;
			case '/':
				ans = num1 / num2;
				break;

			default:
				break;
		}

		printf("\n %d",ans);






	return 0;
}
