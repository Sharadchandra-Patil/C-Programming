#include<stdio.h>
int main(void)
{
    char *arr[5]={NULL};
    char name1[]="rahul";    
    char name2[]="amit";
    char name3[]="raj";
    char name4[]="amol";
    char name5[]="yogesh";

    arr[0]= name1;
    arr[1]= name2;
    arr[2]= name3;
    arr[3]= name4;
    arr[4]= name5;
    

    int index;
    for(index=0; index<5; index++)
    {
        printf("\n arr[%d]=%u ", index, arr[index]);
        printf("   &arr[%d]=%u ", index, &arr[index]);
        printf("   arr[%d]=%s",  index, arr[index]);
    }
    return 0;
}