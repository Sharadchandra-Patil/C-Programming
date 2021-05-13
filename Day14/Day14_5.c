#include <stdio.h>


int fun() {
	static int num = 10; // static  -- initilized only once -- when program started (like global)
    num++;
	printf("%d\n", num);
}

int main() {
	//printf("%d\n", num); // error: num is not in scope
	fun(); // 11
	fun(); // 12
	fun(); // 13
	return 0;
}

/*
#include<stdio.h>
int num = 10; // global variable

int fun() 
{
    num++;
	printf("%d\n", num);
}

int main() {
	printf("%d\n", num); // 10
	fun(); // 11
	fun(); // 12
	fun(); // 13
	return 0;
}
*/
/*
#include<stdio.h> 
int fun() {
	int num = 10; // local variable
	num++;
	printf("%d\n", num);
}

int main() {
	//printf("%d\n", num); // error: num is not in scope
	fun(); // 11
	fun(); // 11
	fun(); // 11
	return 0;
}
*/