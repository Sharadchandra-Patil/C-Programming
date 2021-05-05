#include<stdio.h>

int main()
{
    /*
                    &&
                1    0    0
                0    1    0 
                1    1    1
                0    0    0    

                    ||
                1    1    1
                1    0    1
                0    1    1
                0    0    0              

    */

   /*
    int ans;
    int num1=1;
    int num2=1;

    //ans = num1 && num2;
    //ans = num1 || num2;
     
    printf("ans=%d num1=%d num2=%d",ans,num1,num2);
    */
   /*
   int ans;
   int num1=0;
   int num2=1;
            //0         
      //ans = num1++ && num2;
      //ans = ++num1 && num2;    
        //      1    &&  1
        //      1     
       ans = num1++ || num2++;
       //     0     ||  1 
       //       1 
    printf("ans=%d num1=%d num2=%d",ans,num1,num2);*/

  /*
   int ans;
   int num1=1;
   int num2=1;
   int num3=1;
    
    //ans = num1 || ++num2 && ++num3;

    //    num1 || ( ++num2 && ++num3 )
    //      T  ||   skip 
    //
    ans = num1 || ++num2 && ++num3;        T 
    printf("ans=%d num1=%d num2=%d num3=%d",ans,num1,num2,num3);
    */

 /*
   int ans;
   int num1=0;
   int num2=1;
   int num3=1;
    
    //ans = num1 || ++num2 && ++num3;

    //    num1 || ( ++num2 && ++num3 )
    //      T  ||   skip 
    //
    ans = num1 || ++num2 && ++num3; 
    //    num1 || ( ++ num2 && ++num3 )
    //     0   || (  2  &&  2 ) 
    //     F   ||   T
    //          T           
    printf("ans=%d num1=%d num2=%d num3=%d",ans,num1,num2,num3);
  */

   int ans;
   int num1=0;
   int num2=1;
   int num3=1;
    
    //ans = a++ && ++b || c++;
    //      (a++ && ++b) || c++ 
    

    
    //ans = num1 || ++num2 || ++num3;
     //      0  ||   2  || ++num3(no)
    //      F  ||  T 
    //        T 
   // ans = ++num1 || ++num2 || ++num3;
    //     1  || skip || skip 
    //          T
           //0         1        1 
    ans = ++num1 && ++num2 && ++num3;
    //    (++num1 && ++num2) && ++num3;
    //    1  &&  2  && 2 
    //   ( T  &&  T ) && T
    //        T     && T 
    //          T    

    // num1 = 0 
    //  num1||num2&&num3||num4
    //  num1 || ( num2 && num3 ) || num4   
    //   F   ||   F  || num4 
    //      F || F ||  T
    //         F || T 
    //          T  


    printf("ans=%d num1=%d num2=%d num3=%d",ans,num1,num2,num3);


    return  0;
}