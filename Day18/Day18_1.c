#include<stdio.h>

int main()
{
    /*
    const int num = 100; 
    const int num2 = 200; 
    const int * ptr = &num; 
// ptr is a non const pointer pointing to const int variable 

    // const keyword is before * so value is constant 
    printf("num=%d\n",num); // 100
    printf("num=%d\n",*ptr);//100
    //*ptr = 2000; // value is constant so cannot modified  

     ptr = &num2;
    printf("num=%d\n",num2); //200
    printf("num=%d\n",*ptr);//200 


// ptr is a non constant pointer pointing to const integer variable      
*/
    const int num = 100; 
    const int num2 = 200; 
    int const * ptr ;// const int const * ptr = &num; 
    ptr = &num;
// ptr is a non const pointer pointing to const int variable 

    // const keyword is before * so value is constant 
    printf("num=%d\n",num); // 100
    printf("num=%d\n",*ptr);//100
    //*ptr = 2000; // value is constant so cannot modified  

    ptr = &num2;
    printf("num=%d\n",num2); //200
    printf("num=%d\n",*ptr);//200 

}

/*
int main()
{
    int num = 100;
    int *ptr = &num; 
 // ptr is a non constant pointer pointing to the non constant integer variable    

    // num = 2000;// value of num can modified becoz it is non constant  
    printf("num = %d\n",num);// 100 
    printf("*ptr = %d\n",*ptr);// 100 

    int num2 = 200; 
    ptr = &num2; 
    printf("num = %d\n",num2);// 200 
    printf("*ptr = %d\n",*ptr);// 200

    *ptr = 1000;  
    printf("num = %d\n",num2);// 1000 
    printf("*ptr = %d\n",*ptr);// 1000


    return 0; 
}
*/