#include<stdio.h>
#pragma pack(1)
/*struct date
{
    int dd, mm, yy;
};
struct emp
{
    int empno;
    char name[10];
    float sal;
    struct date doj; 
};*/
typedef struct emp
{
    int empno;
    char name[10];
    float sal;
    struct date
    {
        int dd, mm, yy;
    }doj; 
}EMP;
//typedef struct emp EMP;
int main()
{
    EMP e;//struct emp e;
    printf("\n size of e=%d", sizeof(e));

    printf("\n Enter emp info :: \n");
    printf("\n Enter empno :: ");
    scanf("%d", &e.empno);
    
    printf("\n Enter empname :: ");
    scanf("%s", e.name);

    printf("\n Enter sal :: ");
    scanf("%f", &e.sal);
    
    printf("\n Enter doj in dd-mm-yyyy format :: ");
    scanf("%d%*c%d%*c%d", &e.doj.dd,&e.doj.mm, &e.doj.yy);

    printf("\n EmpNo   Name   Sal        doj\n");
    printf("%-6d%-10s%-6.3f\t %d-%d-%d", e.empno, e.name, e.sal, e.doj.dd, e.doj.mm, e.doj.yy);
    return 0;    
}