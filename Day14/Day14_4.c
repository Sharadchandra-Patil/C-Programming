// global variables
#include <stdio.h>

// var declared inside function --> local variable
// var declared outside function --> global variable 

// global variable declaration --> for compiler
void sumpro(int a, int b);
extern int ps,pp;

int main() {
	int x = 10, y = 3;
	printf("initial values: ps = %d, pp = %d\n", ps, pp);
	sumpro(x, y);
	printf("sum = %d, product = %d\n", ps, pp); // accessing global variables
	return 0;
}


void sumpro(int a, int b) {
	// accessing global variables ps, pp
	ps = a + b;
	pp = a * b;
}
int ps,pp; 
/*
#include<stdio.h>
// global variables -- can be accessed in whole program.
	// created when program is started -- even before main() is called.
	// created in data section --> default value is 0.
int ps; 
int pp;
	// destroyed when program is terminated -- after completion of main().

void sumpro(int a, int b);

int main() {
	int x = 10, y = 3;
	printf("initial values: ps = %d, pp = %d\n", ps, pp);
	sumpro(x, y);
	printf("sum = %d, product = %d\n", ps, pp); // accessing global variables
	return 0;
}

void sumpro(int a, int b) {
	// accessing global variables ps, pp
	ps = a + b;
	pp = a * b;
}
*/
/*void sumpro(int a, int b);

int main() {
	int x = 10, y = 3;
	sumpro(x, y);
	printf("sum = %d, product = %d\n", ps, pp);
		// main cannot access local variables in another function
		// scope of ps & pp is limited to sumpro() function only.
	return 0;
}

void sumpro(int a, int b) {
	int ps = a + b;
	int pp = a * b;
}
*/