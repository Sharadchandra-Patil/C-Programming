#include<stdio.h>
// global struct decl
struct emp
{
	int empno;
	char name[10];
	float sal;
};
struct emp AcceptEmpInfo();
void PrintEmpInfo(const struct emp *e);
int main(void)
{
	struct emp e1;

	printf("\n Enter Employee Info :: ");
	e1=AcceptEmpInfo();

	printf("\n Employee info :: call in main function\n");
	PrintEmpInfo(&e1);

	return 0;
} 
struct emp AcceptEmpInfo()
{
	struct emp e;
    
	printf("\n Enter Emp No :: ");
	scanf("%d", &e.empno);

	printf("\n Enter Emp Name :: ");
	scanf("%s", e.name);

	printf("\n Enter Emp sal :: ");
	scanf("%f", &e.sal);

	return e;
}
void PrintEmpInfo(const struct emp *e)
{
	
	printf("\n EmpNo Name  Salary  (using struct variable e)\n ");
	printf("%-5d[%u] %-10s%-6.2f", e->empno,&e->empno, e->name, e->sal);
	return;
}
