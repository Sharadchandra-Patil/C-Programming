#include<stdio.h>
#pragma pack(1) 
union result
{
    float per;
    char grade[4];
};

struct student
{   
    int rollno;
    char name[10];
    int std;
    union result res;
};

int main()
{
    struct student s1; 
    printf("\n size of union =%d", sizeof(union result));
    printf("\n size of student =%d", sizeof(struct student));

    printf("\n Enter roll No ::");
    scanf("%d", &s1.rollno);

    printf("\n Enter name :: ");
    scanf("%s", s1.name);

    printf("\n Enter std :: ");
    scanf("%d", &s1.std);

    if(s1.std>=1 && s1.std<=4)
    {
        printf("enter grade :: ");
        scanf("%s", s1.res.grade);
    }
    else if(s1.std>=5 && s1.std<=10)
    {
        printf("\n Enter percemtage :: ");
        scanf("%f", &s1.res.per);
    }
    printf("\n empno   name   std ");
    printf("\n%d   %s   %d\n", s1.rollno, s1.name, s1.std);
    s1.std>=1 && s1.std<=4 ? printf("\n grade=%s", s1.res.grade): printf("\n per=%.3f", s1.res.per);
    return 0;   
}