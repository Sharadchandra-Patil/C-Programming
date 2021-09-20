#include<stdio.h>

//NESTED STRUCTURE 

struct  Student
{
    char name[20];
    int rollno;
    int marks;
    
    struct 
    {
        int dd;
        int mm;
        int yy;
    }dt;

}st; 
//st.name
//st.rollno
//st.marks
//st.dt.dd
//st.dt.mm
//st.dt.yy
 





/*
struct Date
{
    int dd;
    int mm;
    int yy;
};

typedef struct  Student
{
    char name[20];
    int rollno;
    int marks;
    struct Date dt; // creating a variable of type structure within another structure 

}STUD; 

*/