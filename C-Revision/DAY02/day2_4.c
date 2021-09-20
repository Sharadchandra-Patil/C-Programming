#include<stdio.h>
int main(void)
{
    //int num=50;
    //int *ptr=&num;
    int num; //variable decalration 
    num=50; // variable definition

    int *ptr; // pointer variables
    ptr = &num; // pointer defintion

    int **pp; // pointer to pointer declaration
    pp=&ptr;  // pointer to pointer defintion 

    // int **pp = &ptr; // pointer to pointer initialization 



    printf("Num = %d *ptr = %d",num,*ptr);
    printf("\n &num = %u ptr = %u &ptr = %u",&num,ptr,&ptr);
    printf("\n **pp = %d pp= %u &pp= %u",**pp,pp,&pp);

    num=60;
    printf("\n Num = %d *ptr = %d **pp = %d",num,*ptr,**pp);
    *ptr=70;
    printf("\n Num = %d *ptr = %d **pp = %d",num,*ptr,**pp);
    **pp=80;
    printf("\n Num = %d *ptr = %d **pp = %d",num,*ptr,**pp);

    printf("\n size = %d",sizeof(ptr));
    printf("\n size = %d",sizeof(pp));


    return 0;
}