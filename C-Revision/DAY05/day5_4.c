#include<stdio.h>

typedef struct   //Anonysmous structure 
{
    int id;
    int marks;
}STUD; 

//STUD is nick name to anonymous structure 
//STUD.id // not valid
//STUD.marks // not valid


//STUD st; // STUD : structure nick name , st : Structure variable 
//st.id = 1; //valid 
//st.marks = 95;  //valid



/*
struct   //Anonysmous structure 
{
    int id;
    int marks;
}s; // anonymous structure variable is created at the time of declaration

int main(void)
{
   // id=1; // no 
    // marks = 80; //no 

    //if we have anonymous structure then we can not create variable
    //inside main 
    // struct _______ s;

    s.id=1; //valid 
    s.marks=90; //valid 



    return 0;
}


*/





/*
typedef struct Student_Record
{
    int rollno;
    int marks;
}stud;

// real name : Student_Record
// nick name : stud

//stud.rollno ??? // NO 
//stud.marks ?? // NO 


inside main
stud st;
st.rollno // valid
st.marks // valid 



struct Student_Record
{
    int rollno;
    int marks;
}stud;

// structure name : Student_Record
// structure Variable : stud
// stud.rollno // valid
//stud.marks // valid 


*/





/*
typedef struct Employee_INFO
{
    char name[20];
    int id;
}EMP;

// real name : struct Employee_INFO
// alias name / nick name : EMP



int main(void)
{
    struct Employee_INFO e; //variable e using realname
    EMP e1; //e1 is variable created using nick name 
    printf("\n Enter Employee Name :");
    scanf("%s",e.name);
    printf("\n Enter Employee ID : ");
    scanf("%d",&e.id);

    printf("\n ID = %d Name = %s",e.id,e.name);
    return 0;
}

*/