#include<stdio.h> 
#include<string.h> 
struct Employee
{ 
    char name[20]; //first 20 bytes for name
    int empid; // four bytes to empid 
    int salary;  // four bytes 
};
void accept_emp(struct Employee *ptr); 
void print_emp(struct Employee *ptr); 
int main() 
{
    struct Employee e1[2]; 
    accept_emp ( e1 );
    print_emp ( e1 );  
}

void accept_emp(struct Employee e1[])
{
        int i; 

        for(i=0;i<2;i++)
        {
           
        }
   

}
void print_emp(struct Employee e1[])
{
     int i; 
     for(i=0;i<2;i++)
        {
           
        }
    
   
}




