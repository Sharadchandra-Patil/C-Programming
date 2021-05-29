#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};// slack bytes added 
int main(void)
{
    struct emp e1={100,"Rahul", 20000};
    struct emp *ptr=&e1;
    printf("\n size of e1=%d", sizeof(e1));
    printf("\n size of ptr=%d", sizeof(ptr));
    printf("\nempno    name   sal \n");
    printf("%-10d%-12s%-7.3f ", e1.empno, e1.name, e1.sal);

    printf("\nempno    name   sal \n");
    printf("%-10d%-12s%-7.3f ", ptr->empno, ptr->name, ptr->sal);

    printf("\nempno    name   sal \n");
    printf("%-10d%-12s%-7.3f ", (*ptr).empno, (*ptr).name, (*ptr).sal);

    return 0;
}