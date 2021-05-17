#include<stdio.h>
void sumpro(int a, int b, int *ps, int *pp) {
	*ps = a + b;
    //valueat(100) = a + b
    //valueat(100) --> &s 
    // a + b -- addition -- > address of 100 --> s   
	*pp = a * b;
    //valueat(200) = a * b
    //valueat(200) --> &p  
    // a * b -- multipy -- > address of 200 --> p
    
    
}
// int num// normal local integer variable 
// int *ptr// ptr is a pointer variable 
// ptr is pointer which can store address of any integer variable  
// char ch// it can store any character 
// char *ptr//it can store address of any char variable   
// Pointer variable 

int main() {
	int x = 12, y = 4, s, p;
	sumpro(x, y, &s, &p);
	printf("%d, %d\n", s, p);
	return 0;
}



/*#include<stdio.h>
void sumpro(int a, int b, int ps, int pp) {
	ps = a + b;
	pp = a * b;
    
    
}

int main() {
	int x = 12, y = 4, s, p;
	sumpro(x, y, s, p);
	printf("%d, %d\n", s, p);
	return 0;
}

*/