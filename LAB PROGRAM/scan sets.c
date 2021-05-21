#include <stdio.h>
#include <stdlib.h>
/*
//#define MAX 40
int main(void)
{
	// scan set1
	char city[40];

	printf("\n Enter City:: ");
    //scanf("%s", city);// upto space
    //gets(city); // scan upto new line
	scanf("%[^\n]s", city);// scan upto new line char single line
	printf("\ncity=%s", city);

	 //input  : Enter City :: new delhi
	 //output : city=new delhi
	return 0;
}
*/
/*
int main(void)
{
	// scan set1
	char city[40];

	printf("\n Enter City:: ");
	scanf("%[^.]s", city);// scan upto 1st occurance of . char
	printf("\ncity=%s", city);

	 //input  :Enter city ::  p
	//	u
	//n
	//e
	//.

	//output :: city=p
	//u
	//n
	//e
    // 		if we want to accept multi line string we can use this
   //just decide ending char
	return 0;
}
*/
/*
int main(void)
{
	// scan set1
	char city[40];

	printf("\n Enter City:: ");
	scanf("%[A-Z]s", city);// scan upto 1st other than capital letter
	printf("\ncity=%s", city);

	 //input  : Enter City :: ABCefgh
	 //output : city=ABC

	//input  : Enter City :: ABC1pqr
		 //output : city=ABC1pqr
	return 0;
}
*/

int main(void)
{
	// scan set1
	char city[40];

	printf("\n Enter City:: ");
	scanf("%[a-z]s", city);// scan upto 1st other than small letter
	printf("\ncity=%s", city);

	 //input  : Enter City :: abcPQR
	 //output : city=abc

	//input  : Enter City :: xyz9pqr
		 //output : city=xyz
	return 0;
}

/*
int main(void)
{
	// scan set1
	char city[MAX];

	printf("\n Enter City:: ");
	scanf("%[0-9]s", city);// scan upto 1st other than 0-9 numbers
	printf("\ncity=%s", city);

	 //input  : Enter City :: 1234abc
	 //output : city=1234

	//input  : Enter City :: 1234ABC345
		 //output : city=1234
	return 0;
}
*/

// try
	//	scanf("%[^0-9]s", city4);// scan upto a-z ot A-Z letters
	//	scanf("%[^A-Z]s", city4);// scan upto small letters
	//	scanf("%[^a-z]s", city4);// scan upto capital letters