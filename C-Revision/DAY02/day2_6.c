#include<stdio.h>

int main(void)
{
    int num=25;
    char ch='A';
   // void *vptr; //generic pointer 
   void *vptr=NULL; // null pointer / void pointer
    vptr=&num;  // pointer is holding address of num
    printf("&num : %u vptr : %u num = %d *vptr = %d",&num,vptr,num,*(int*)vptr);
    vptr=&ch;//// pointer is holding address of ch
    printf("\n &ch : %u vptr : %u ch = %c *vptr=%c",&ch,vptr,ch,*(char *)vptr);
    return 0;

}


/*
int main(void)
{
    int num=25;
    char ch='A';
    int *ptr = &num;
    char *cptr = &ch;
    printf("Num = %d *ptr = %d &num = %u ptr = %u",num,*ptr,&num,ptr);
    printf("\n Ch  = %c *cptr = %c &ch = %u cptr = %u",ch,*cptr,&ch,cptr);


    return 0;
}

*/