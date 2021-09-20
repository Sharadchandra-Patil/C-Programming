#include<stdio.h>

extern int a; // data section 
int main(void)
{
    printf("value of variable = %d",a);
    return 0;
}
a=60;


/*
void test();
int main(void)
{
    test();
   // printf("s_var = %d",s_var); //error : undeclared 
   printf("\n calling test() again....");
   test();
   test();
    return 0;
}
void test()
{
    int num=40; // local // auto // stack 
    static int s_var=100; // data section 
    printf("\n Num = %d S_var = %d",num,s_var);
    num++;
    s_var++;
    printf("\n Num = %d S_var = %d",num,s_var);

}
*/




/*
// static variables in gloabal area
// static variable in some function

static int s_var=50; // global
// int s_var=50;
// static variables must be initialized at the time of declaration 

void demo();
void test();

int main(void)
{
    printf("\n Main : s_var = %d ",s_var);
    demo();
    test();
     printf("\n Accessing static variable again from Main : s_var = %d ",s_var);
    return 0;
}

void demo()
{
     printf("\n Demo Function: s_var = %d ",s_var);
}

void test()
{
     printf("\n Test Function: s_var = %d ",s_var);
     s_var=s_var+10; // modifying the state of static variable 
     printf("\n Test Function: s_var = %d ",s_var);
}

*/