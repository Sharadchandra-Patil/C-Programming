#include <time.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[20];
    char add[20];
    float salary;
    char s_date[15];
    int b_date[3];
    int j_date[3];
} emp;
void getdata(void);
void display(void);
void probation_over_date(void);
int main(void)
{
    getdata();
    display();
    probation_over_date();
}
void getdata(void)
{
    char delim[2] = {"/"};
    char *token;
    printf("::- Enter Employee Details ::- \n");
    printf("Id       : ");
    scanf("%d", &emp.id);
    printf("Name     : ");
    scanf("%s", &emp.name);
    printf("Address  : ");
    scanf("%s", &emp.add);
    printf("Salary   : ");
    scanf("%f", &emp.salary);
    while (1)
    {
        printf("\nEnter Birth date in given format :-\n");
        printf("DD/MM/YYYY :");
        scanf("%s", emp.s_date);
        token = strtok(emp.s_date, delim);
        int i = 0;
        while (token != NULL)
        {
            emp.b_date[i] = atoi(token);
            i++;
            token = strtok(NULL, delim);
        }
        if ((emp.b_date[0] > 0 && emp.b_date[0] < 32) && (emp.b_date[1] > 0 && emp.b_date[1] < 13) && (emp.b_date[2] > 1900))
            break;
        else
        {
            printf("\nInvalid Date !! :\n");
            printf("Retry \n");
        }
    }
    while (1)
    {
        printf("\nEnter Joining date in given format :-\n");
        printf("DD/MM/YYYY :");
        scanf("%s", emp.s_date);
        token = strtok(emp.s_date, delim);
        int i = 0;
        while (token != NULL)
        {
            emp.j_date[i] = atoi(token);
            i++;
            token = strtok(NULL, delim);
        }
        if ((emp.b_date[0] > 0 && emp.j_date[0] < 32) && (emp.j_date[1] > 0 && emp.j_date[1] < 13) && (emp.j_date[2] > 1900))
            break;
        else
        {
            printf("Invalid Date !! :\n");
            printf("Retry \n");
        }
    }
    //system("CLS");
}

void display(void)
{
    int year;
    int month;
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    year = local->tm_year + 1900;
    month = local->tm_mon + 1;
    printf("\nAge Of employee when he joined company : %d Years\n", emp.j_date[2] - emp.b_date[2]);
    int m = (month - emp.j_date[1]) + 12 * (year - emp.j_date[2]);
    printf("Experience Of employee till date    : %d Month", m);
}
void probation_over_date(void)
{

    bool leapyear;
    int day = emp.j_date[0];
    int month = emp.j_date[1];
    int year = emp.j_date[2];
    int n_day = day;
    int year_d[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        leapyear = true;
    else
        leapyear = false;

    if (leapyear)
        year_d[1] = 29;
    else
        year_d[1] = 28;

    int sum = 0;
    int i = month;
    int rec;
    while (sum != 90)
    {
        int l;
        rec = year_d[i - 1];
        for (l = n_day - 1; l < rec; l++)
        {
            sum++;
            n_day++;
            if (sum == 90)
                break;
        }
        if (l == 31)
        {
            n_day = 1;
            if (month != 12)
                month = month + 1;
            else
            {
                month = 1;
                year = year + 1;
            }
        }
        else if (l == 30)
        {
            n_day = 1;

            if (month != 12)
                month = month + 1;
            else
            {
                month = 1;
                year = year + 1;
            }
        }
        else if (l == 29)
        {
            n_day = 1;
            if (month != 12)
                month = month + 1;
            else
            {
                month = 1;
                year = year + 1;
            }
        }
        else if (l == 28)
        {
            n_day = 1;
            if (month != 12)
                month = month + 1;
            else
            {
                month = 1;
                year = year + 1;
            }
        }
        if (i != 12)
            i++;
        else
            i = 1;
    }

    printf("\nProbation date of %s is :  %d/%d/%d", emp.name, n_day, month, year);
}