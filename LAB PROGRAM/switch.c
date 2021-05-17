#include<stdio.h>
int main(void)
{
    int deptno, empno;
    char desg;

    printf("\n Enter Deptno :: ");
    scanf("%d", &deptno);

    printf("\n Enter empno :: ");
    scanf("%d", &empno);

    printf("\n Enter desg :: ");
    scanf("%*c%c", &desg);
    
    switch(deptno)
    {
        case 10: printf("emp with %d empno working in marketing dept", empno); break;
        case 20: printf("emp with %d empno working in management dept", empno); break;
    }

    switch(desg)
    {
        case 'M': printf("  as manager "); break;
        case 'S': printf("  as superwiser "); break;
        case 's': printf("  as security officer "); break;
    }
    return 0;
    
}