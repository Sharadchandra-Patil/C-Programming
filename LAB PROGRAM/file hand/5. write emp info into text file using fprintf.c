#include<stdio.h>
#pragma pack(1) 
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void AcceptEmpInfo(struct emp *e1);
int main()
{
    FILE *fpEmpWrite=NULL;
    struct emp e;

    fpEmpWrite=fopen("empdata.txt", "a");
    if(fpEmpWrite==NULL)
        printf("Unable to open file");
    else
    {
        AcceptEmpInfo(&e);
        fprintf(fpEmpWrite,"\n%d\t%s\t%f", e.empno, e.name, e.sal);
        printf("\n record is added to file");
        fclose(fpEmpWrite);
    }
    return 0;
}
void AcceptEmpInfo(struct emp *e1)
{
    printf("Enter empno :: ");
    scanf("%d", &e1->empno);
    printf("Enter name :: ");
    scanf("%s", e1->name);
    printf("Enter sal :: ");
    scanf("%f", &e1->sal);
    
    return ;
}