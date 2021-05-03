#include<stdio.h>

int main()
{
    /*
    int num=1234;
    printf("%d\n",num%10);
    // 1234 % 10 --> 4
    printf("%d",num/10);
    // 1234 / 10 // 123  
    */

  /* 
   float fvar=10.33;
   printf("%f\n",fvar%10);*/

   /* 
    int num1 = 2;
    int num2 = 2;
    int num3 = 2;
    float ans; 

    // double 
    // float
    // int 
    // char
    ans = (num1 + num2 + num3) / 3; 
          // (int + int + int) / int
          //  int / int 
          //  int 
          // (2 + 2 + 2) / 3
          //   6 / 3 
          //   2  
       // ans --> float 
       // right --> int 
       // float = int // mixed arithmatic 

      printf("ans = %f",ans);       
    */ 

   /*

    int num1 = 2;
    int num2 = 2;
    int num3 = 1;
    float ans; 

    ans = (num1 + num2 + num3) / 3;
    //      int + int + int / int 
    //       int / int 
    //          int   
    //      (2   +  2 +  1)  / 3
    //      1.67  

    printf("ans=%f",ans);

    */


 //   int num1 = 2;
 //   int num2 = 2;
 //   int num3 = 1;
 //   float ans; 

    //ans = (num1 + num2 + num3) / 3.0; // typecasting 

          // int + int + int / double 
          // int / double 
          // double     

     //ans = (num1 + num2 + num3) / 3.0f;
     //     int + int + int / float 
     //         int / float 
     //           float   

     //ans = ((float)num1 + num2 + num3) / 3;// Explicit typecasting 
        //   (float + int + int) / int
        //    float / int 
        //     float  

        //ans = (float)(num1 + num2 + num3) / 3;
                // float / int
                // 3 is promoted to 3.0f      
                //  float  

    //printf("ans=%.2f",ans);

        float ans;
        ans = 5/2.0;
        // int / double 
        // double 
         ans = 5/2.0f;
         // int / float 
         // float    
        printf("%f",ans);

        char ch = 65; 
        // char = int 
        // lower = higher 
        // narrowing / demoting   
    return 0;     
}