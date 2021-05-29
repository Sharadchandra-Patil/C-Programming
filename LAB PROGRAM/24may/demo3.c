#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};// slack bytes added 
void AcceptEmp(struct emp *e);
void PrintEmp(const struct emp *e);
int main(void)
{
    struct emp e1={100,"Rahul", 20000};

    printf("\n Enter Emp info:: \n");
    AcceptEmp(&e1);

    printf("\n  Emp info:: \n");
    PrintEmp(&e1);
    
    return 0;
}
void AcceptEmp(struct emp *e)
{
    printf("\n Enter emp No :: ");
    scanf("%d", &e->empno);
    printf("\n Enter emp name :: ");
    scanf("%s", e->name);
    printf("\n Enter  emp sal :: ");
    scanf("%f", &e->sal);
    
    
    return ;
}
void PrintEmp(const struct emp *e)
{
    //e->sal=-10000; error
    printf("\nempno    name   sal \n");
    printf("%-10d%-12s%-7.3f ", e->empno, e->name, e->sal);
    return;
}
