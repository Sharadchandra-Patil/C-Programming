#include<stdio.h>
#include<stdlib.h>

#define SIZE 1

struct Date
{
    int dd;
    int mm;
    int yy;
};

struct Name
{
    char fname[10];
    char mname[10];
    char lname[10];
};

struct Address
{
    int hno;
    char area_name[10];
    char city[10];
    char tal[10];
    char dist[10];
    int pin;
};

struct Employee
{
    int empid;
    struct Name name;
    struct Address address;
    int salary;
    struct Date birthdate;
    struct Date joindate;

};

void accept(struct Employee a[]);
void disp(struct Employee a[]);

int main(void)
{
    struct Employee emp[SIZE];

    accept(emp);
    disp(emp);

    return 0;
}

void disp(struct Employee a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEmployee ID : %d",a[i].empid);
        printf("\nName : %s %s %s",a[i].name.fname,a[i].name.mname,a[i].name.lname);
        printf("\nAddress : %d, %s, %s, Tal. %s, Dist. %s - %d",a[i].address.hno,a[i].address.area_name,a[i].address.city,a[i].address.tal,a[i].address.dist,a[i].address.pin);
        printf("\nSalary : %d",a[i].salary);
        printf("\nBirthate(dd/mm/yy) : %d / %d / %d",a[i].birthdate.dd,a[i].birthdate.mm,a[i].birthdate.yy);
        printf("\nJoindate(dd/mm/yy) : %d / %d / %d",a[i].joindate.dd,a[i].joindate.mm,a[i].joindate.yy);
        printf("\nAge(in years) : %d",(a[i].joindate.yy - a[i].birthdate.yy));
        printf("\nExperience(in months) : %d",a[i].joindate.mm);
        printf("\nDate after probation period : %d / %d / %d",a[i].joindate.dd,(a[i].joindate.mm + 3),a[i].joindate.yy);
    }    
}

void accept(struct Employee a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter ID : ");
        scanf("%d",&a[i].empid);
        printf("\nEnter first name : ");
        scanf("%s",a[i].name.fname);
        printf("\nEnter middle name : ");
        scanf("%s",a[i].name.mname);
        printf("\nEnter last name : ");
        scanf("%s",a[i].name.lname);
        printf("\nEnter Address : ");
        printf("\nHouse no. : ");
        scanf("%d",&a[i].address.hno);
        printf("\nArea name : ");
        scanf("%s",a[i].address.area_name);
        printf("\nCity name : ");
        scanf("%s",a[i].address.city);
        printf("\nTaluka name : ");
        scanf("%s",a[i].address.tal);
        printf("\nDistrict name : ");
        scanf("%s",a[i].address.dist);
        printf("\nPincode : ");
        scanf("%d",&a[i].address.pin);
        printf("\nEnter Salary : ");
        scanf("%d",&a[i].salary);
        printf("\nEnter DOB(dd/mm/yy) : \n");
        scanf("%d",&a[i].birthdate.dd);
        scanf("%d",&a[i].birthdate.mm);
        scanf("%d",&a[i].birthdate.yy);
        printf("\nEnter DOJ(dd/mm/yy) : \n");
        scanf("%d",&a[i].joindate.dd);
        scanf("%d",&a[i].joindate.mm);
        scanf("%d",&a[i].joindate.yy);
    }    
}