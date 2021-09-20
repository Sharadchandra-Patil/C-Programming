#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 3

struct book
{
    int id;
    char name[20];
    int price;
};

void acc_data(struct book a[]);
void print_data(struct book a[]);
void bubble_sort(struct book a[]);

int main(void)
{
    struct book arr[SIZE];

    acc_data(arr);
    printf("\nData before sorting : ");
    print_data(arr);
    bubble_sort(arr);
    printf("\nData after Sorting : ");
    print_data(arr);
       
    return 0;
}

void bubble_sort(struct book a[])
{
    struct book b;
    for (int i = 0; i < SIZE-1; i++)
    {
        if (a[i].price < a[i+1].price)
        {
            b = a[i+1];
            a[i+1] = a[i];
            a[i] = b;
        }
    }
}

void print_data(struct book a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nID : %d",a[i].id);
        printf("\nName : %s",a[i].name);
        printf("\nPrice : %d",a[i].price);
    } 
}

void acc_data(struct book a[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter ID : ");
        scanf("%d",&a[i].id);
        printf("\nEnter name : ");
        scanf("%s",a[i].name);
        printf("\nEnter price : ");
        scanf("%d",&a[i].price);
    }
}
