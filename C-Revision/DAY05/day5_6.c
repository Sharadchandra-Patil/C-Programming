#include<stdio.h>

struct Date
{
    int dd;
    int mm;
    int yy;
};
struct Date accept(); //accept() is returning a structure variable
void disp(struct Date dt); //disp() is taking structure variable as an argument

int main(void)
{

    struct Date d1;
    d1 = accept(); 
    disp(d1);
}

struct Date accept()
{
    struct Date d;
    printf("Enter Day :");
    scanf("%d",&d.dd);
     printf("Enter Month :");
    scanf("%d",&d.mm);
     printf("Enter Year :");
    scanf("%d",&d.yy);
    return d;
}

void disp(struct Date dt)
{
    printf("Date = %d-%d-%d",dt.dd,dt.mm,dt.yy);
}












//struct Date d;
//d.dd , d.mm, d.yy

//struct Date *d1;
//d1->dd; d1->mm, d1-> yy 
