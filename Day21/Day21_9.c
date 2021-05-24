#include<stdio.h> 
#include<string.h> 
struct Employee
{ 
    char name[20]; //first 20 bytes for name
    int empid; // four bytes to empid 
    int salary;  // four bytes 
};
void accept_emp(struct Employee e1); 
void print_emp(struct Employee e1); 
int main() 
{
    struct Employee e1; 
    accept_emp ( e1 );

    print_emp ( e1 );  
}

void accept_emp(struct Employee e1)
{
    printf("Enter the name id and salary\n"); 
    scanf("%s%d%d",e1.name,&e1.empid,&e1.salary);
}
void print_emp(struct Employee e1)
{
    
    printf("%s%d%d",e1.name,e1.empid,e1.salary);
}




