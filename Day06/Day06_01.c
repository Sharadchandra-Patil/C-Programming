
#include<stdio.h>
int main()
{
    int num=100;
    char ch='A';
    float f_var=10.33;
    double d_var=12.33; 

    printf("size=%d\n",sizeof(num));  
    // num is of type int 
    // int --> 4 byes    
    printf("size=%d\n",sizeof(ch));
    printf("size=%d\n",sizeof(f_var));
    printf("size=%d\n",sizeof(d_var));

    printf("size=%d\n",sizeof(65));
    printf("size=%d\n",sizeof(65.3));
    printf("size=%d\n",sizeof(65.3f));
    printf("size=%d\n",sizeof('A'));
    printf("size=%d\n",sizeof(65l));
    printf("size=%d\n",sizeof(65L));
    printf("size=%d\n",sizeof(65ll));
    // 65ll --> long long 
    // 'A' --> 65 --> sizeof(65) 

    printf("size=%u",sizeof(100));



    return 0;


    return 0;
}