#include<stdio.h> 
#include<string.h> 

int main()
{
    char name[30]="Sunbeam Pune";
    char *name1 = "Sunbeam"; 
    int a=0;
    int *ptr = &a;
    printf("size=%d len=%d",sizeof(name),strlen(name));
    printf("\n size=%d len=%d",sizeof(ptr),strlen(name1));

}


