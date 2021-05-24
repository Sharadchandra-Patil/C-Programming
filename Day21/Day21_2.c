#include <stdio.h>

#define ADD(a,b) (a + b)

#define MULTIPLY(a, b) (a * b)

#define SQR(x) ((x) * (x))
        //     (2+3) * (2+3)
//              

int main() {
	printf("add = %d\n", ADD(3, 4));
		// printf("add = %d\n", (3 + 4)); // 7

	printf("multiply = %d\n", MULTIPLY(3, 4));
		// printf("add = %d\n", (3 * 4)); // 12
	
    
    printf("multiply = %d\n", MULTIPLY(2+1, 3+1));
		// printf("add = %d\n", (2+1 * 3+1)); // 6
		// 2+1 * 3+1 = 2 + (1 * 3) + 1 = 2 + 3 + 1 = 6



	printf("square = %d\n", SQR(2+3));
		// printf("square = %d\n", ((2+3) * (2+3))); // 25
	return 0;
}

//gcc Day21_2.c -E -o Day21_2.i  
// gcc -S main.c // assembly file 
// gcc -c main.c // object file 


// #define row 2
// #define col 2 
// int arr[row][col]