#include<stdio.h>


#pragma pack(1)
struct Student
{
    int id; //1 + 1 + 1+ 1 
    int rollno; // 1+ 1 + 1 + 1
    int marks; // 1+  1 + 1 + 1
    char grade; // 1 
    char ch; // 1 
    int per; // 1+ 1 + 1 + 1
};
int main(void)
{
    struct Student s;
    printf("Size = %d",sizeof(s));
    return 0;
}


/*
struct Student
{
    int id;
    int rollno;
    int marks;
    char grade;
    char ch;
    int per;
};
int main(void)
{
    struct Student s;
    printf("Size = %d",sizeof(s));
    return 0;
}
*/