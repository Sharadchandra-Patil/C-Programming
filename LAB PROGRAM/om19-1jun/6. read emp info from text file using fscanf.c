#include<stdio.h>
#pragma pack(1) 
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void PrintEmpInfo(struct emp *e1);
int main()
{
    FILE *fpEmpRead=NULL;
    struct emp e;

    fpEmpRead=fopen("empdata.txt", "r");
    if(fpEmpRead==NULL)
        printf("Unable to open file");
    else
    {
        
        fscanf(fpEmpRead,"\n%d\t%s\t%f", &e.empno, e.name, &e.sal);
        printf("\n empno   name   sal\n ");
        PrintEmpInfo(&e);
        fclose(fpEmpRead);
        printf("\n record is added to file");
    }
    return 0;
}
void PrintEmpInfo(struct emp *e1)
{
    printf("%d \t%s\t %f", e1->empno , e1->name, e1->sal);
    return ;
}