#include<stdio.h> 
#include<string.h> 
struct Employee
{ 
    char name[20]; //first 20 bytes for name
    int empid; // four bytes to empid 
    int salary;  // four bytes 
};

//100 <---       name         empid       salary  
//                 100         120        124             
int main()
{
    struct Employee e1 = { "Amit",1,10000};  
    printf("%d\n",sizeof(e1));
     

    struct Employee *ptr;  
    ptr = &e1; 
    // -> arrow operator / indirect acess operator  

    printf("%s %d %d\n",ptr->name,ptr->empid,ptr->salary); 


    printf("%s %d %d\n",e1.name,e1.empid,e1.salary); 

    struct student
    {
        int rollnumber;
        char name[20]; 
        int marks; 
    };  

    struct student s1;
    struct student s2;
    
     
    s1.marks =75; 
    strcpy(s1.name,"Rahul");
    s1.rollnumber = 24; 

    printf("%d %s %d\n",s1.marks,s1.name,s1.rollnumber); 
    
    printf("Enter the Rollno name and marks\n"); 
    scanf("%d%s%d",&s2.rollnumber,s2.name,&s2.marks);

    printf("%s %d %d",s2.name,s2.marks,s2.rollnumber); 
    
     

    return 0;
}