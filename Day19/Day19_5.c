#include<stdio.h> 

int main()
{
         
        // array of integer 
        // int arr[5]; 
        
        // array of characters 
        // char str[10];

        // array of pointers 
        // pointer --> addresses 
        // [100]  [104]  [108]
        //  0       1      2 
       // 100 104 and 108 are the addresses    

    char *numbers[]={"zero","one","two","three"}; 
    char ch[]="sunbeam\o";
    int num; 
    printf("Enter the num");
    scanf("%d",&num);

    printf("size=%d\n",sizeof(ch)); 

    printf("%s", numbers[num]); 


 
}