#include<stdio.h>
int main()
{
    int ans;

/*
    //ans = 1,2,3;
    // = -> assignment operator 
    // , -> comma operator
    printf("ans=%d",ans);  
*/
    // ans = (1,2,3);
    // ans = 1,(2,3);
    // ans = 1, ( 2, 3)
        //   1 , 3 
        //   1
    //ans = 1 , (2) , 3;       
      ans = ( (1,2) , 3);
      //     ( 2 , 3 )
      //        3     
    // = --> assign oper
    // , --> comma 
    // () --> bracket
    printf("ans = %d",ans); 
    return 0; 
}