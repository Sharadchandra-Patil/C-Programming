#include<stdio.h>
#pragma pack(1)
#define SIZE 5
struct emp
{
    int empno;
    char name[10];
    float sal;
};// slack bytes added 
void AcceptEmp(struct emp e[], int size);
void PrintEmp(const struct emp e[], int size);
int main(void)
{
    struct emp e1[SIZE];

    printf("\n Enter Emp info:: \n");
    AcceptEmp(e1, SIZE);

    printf("\n  Emp info:: \n");
    PrintEmp(e1, SIZE);
    
    return 0;
}
void AcceptEmp(struct emp e[], int size)
{
    int index;
    for(index=0; index<size; index++)
    {
        printf("\n Enter emp No :: ");
        scanf("%d", &e[index].empno);
        printf("\n Enter emp name :: ");
        scanf("%s", e[index].name);
        printf("\n Enter  emp sal :: ");
        scanf("%f", &e[index].sal);
    }
    
    return ;
}
void PrintEmp(const struct emp e[], int size)
{
    int index;
    //e->sal=-10000; error
    printf("\nempno    name   sal \n");
    for(index=0;index<size; index++)
        printf("\n%-10d%-12s%-7.3f ", e[index].empno, e[index].name, e[index].sal);
    return;
}
