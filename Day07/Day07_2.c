#include<stdio.h>

int main()
{
     
    // 5 = 2 + 3; // lvalue
    // 2 + 3 = 5; // lvalue
    //printf("%d\n",ans);
    int ans;
    int num = 5;

    //ans = ++num; // pre-increment opr
      ans = --num;  // pre- decrement num = num - 1 
    // ++num --> num = num + 1 

    //ans = num++; // post - increment opr
    //  ans = num--; // post - decrement // num = num -1    
    // num++ -> num = num + 1     
    printf("num=%d ans=%d",num,ans); 
    
    
    
    return 0;
}