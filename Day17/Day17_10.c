#include<stdio.h>
#include <stdio.h>

// function declaration
//void print_array(int a[]);
void print_array(int *a);

int main() {
	int i, arr[4] = { 100, 200, 300, 400 };
    //                100  104  108  112    	
	print_array(arr);
		// print_array(&arr[0]); --> &int
	for(i=0; i<4; i++)
		printf("%d\n", arr[i]); 
}

// function definition
//void print_array(int a[]) 
void print_array(int *a) // pointer notation 
{
     
	int i;
	for(i=0; i<4; i++)
		printf("%d\n", a[i]); // *(a + i)
	for(i=0; i<4; i++)
		a[i]++; // increment each element in array
}


/*
void print_array(int arr[]);
int main()
{
    int i; 
    int arr[5] = { 10,20,30,40,50}; 
    print_array(arr);

    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    } 
}


void print_array(int arr[]) // array notation 
{
    int i; 
    for(i=0;i<5;i++)
    {
        printf("\n%d ",arr[i]);
    }

    for(i=0;i<5;i++)
       arr[i]++; 
}
*/