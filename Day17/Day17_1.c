#include<stdio.h>

int main()
{
   // int num1,num2,num3,num4,num5
   //     100   500  600  900 300 
    // variable declaration
    // memory will be allocated for num1,num2..num5  
    
    int arr[5];// array declaration 
    //  1    2   3    4     5  --> elements 
    // [0]  [1]  [2]  [3]   [4] --> index 
    // 100  104   108 112   116 --> memory location   
 

    // array index always starts from 0 
  // array elements are stored in contiguous mem location    


    // arr is the name of the array   
    // above array can store the int elements 
    // arr will consist 5 elements of int type 

    /*
        arr[0],arr[1],arr[2],arr[3],arr[4]   


    */ 

    arr[0] = 11;
    arr[1] = 22;
    arr[2] = 33;   
    arr[3] = 44;
    arr[4] = 55;
    //  11   22   33   44   55  --> elements 
    // [0]  [1]  [2]  [3]   [4] --> index 
    // 100  104   108 112   116 --> memory location   
 
    printf("arr[0]=%d\n",arr[0]);
    printf("arr[1]=%d\n",arr[1]);
    printf("arr[2]=%d\n",arr[2]);
    printf("arr[3]=%d\n",arr[3]);
    printf("arr[4]=%d\n",arr[4]);




    return 0; 
}

/*
int main()
{
   // int num1,num2,num3,num4,num5
   //     100   500  600  900 300 
    // variable declaration
    // memory will be allocated for num1,num2..num5  
    
    int arr[5];// array declaration 
    //  1    2   3    4     5  --> elements 
    // [0]  [1]  [2]  [3]   [4] --> index 
    // 100  104   108 112   116 --> memory location   
 

    // array index always starts from 0 
  // array elements are stored in contiguous mem location    


    // arr is the name of the array   
    // above array can store the int elements 
    // arr will consist 5 elements of int type 

    return 0; 
}
*/
/*
int main()
{
   // int num1,num2,num3,num4,num5
   //     100   500  600  900 300 
    // variable declaration
    // memory will be allocated for num1,num2..num5  
    
    int arr[5];// array declaration 
    // 100   104   108   112  116
  // array elements are stored in contiguous mem location    


    // arr is the name of the array   
    // above array can store the int elements 
    // arr will consist 5 elements of int type 

    return 0; 
}
*/
/*
int main()
{
   // int num1,num2,num3,num4,num5
    // variable declaration 
    
    int arr[5];// array declaration 
    // arr is the name of the array   
    // above array can store the int elements 
    // arr will consist 5 elements of int type 

    return 0; 
}
*/

/*
int main()
{
    int num1,num2,num3; 
    int sum; 

    num1 = 1;
    num2 = 2;
    num3 = 3; 
    sum = num1 + num2 + num3;
    printf("%d",sum);   


}
*/