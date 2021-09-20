#include<stdio.h>


struct Employee
{
    char name[20];
    int id;
}e; // single variable 

struct Employee
{
    char name[20];
    int id;
}e1,e2,e3; //3 variables 

struct Employee
{
    char name[20];
    int id;
}e1={"Akshita",1},e2={"AKS",2}; // 2 variable initialization 



struct Employee
{
    char name[20];
    int id;
}e[5]; //array of structure  
/*

struct Employee
{
    char name[20];
    int id;
};
int main(void)
{
    int i;
    struct Employee e[4]; // Array of Structure 
    for(i=0;i<4;i++)
    {
        printf("\n Enter Employee Name :");
        scanf("%s",e[i].name);
        printf("\n Enter Employee ID : ");
        scanf("%d",&e[i].id);
    }
    for(i=0;i<4;i++)
    printf("\n Employee Record : ID : %d Name : %s",e[i].id,e[i].name);
    return 0;

}

*/

/*
struct Employee
{
    char name[20];
    int id;
};
int main(void)
{
    struct Employee e1; // one variable
    printf("\n Enter Employee Name :");
    scanf("%s",e1.name);
    printf("\n Enter Employee ID : ");
    scanf("%d",&e1.id);
    printf("\n Employee Record : ID : %d Name : %s",e1.id,e1.name);
    return 0;

}
*/

/*
struct Student
{
    int rollno;
    int id;
    char grade;
}s4; // s4 is structure variable , it is created at the time of structure definition

int main(void)
{
    struct Student s1,s2,s3;
    s1.rollno=1;
    s1.id=10;
    s1.grade='A';
    printf("\n S1 Record : %d %d %c",s1.rollno,s1.id,s1.grade);
    s2.rollno=2;
    s2.id=20;
    s2.grade='A';
     printf("\n S2 Record : %d %d %c",s2.rollno,s2.id,s2.grade);
     s3=s2; //copying one structure data directly into another structure 

    printf("\n S3 Record : %d %d %c",s3.rollno,s3.id,s3.grade);
    return 0;
}

*/