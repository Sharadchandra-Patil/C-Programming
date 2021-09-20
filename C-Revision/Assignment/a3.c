#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void show_record(int a[SIZE]);
int is_array_full(int a[SIZE]);
int is_array_empty(int a[SIZE]);
void addnum(int a[SIZE]);
void delnum(int a[SIZE]);
int findmax(int a[SIZE]);
int findmin(int a[SIZE]);
int findsum(int a[SIZE]);

int main(void)
{
    int arr[SIZE] = {0};
    //int arr[SIZE] = {60,40,90,80,100,10,30,20,50,70};
    int choice,num;
    
    do
    {
        printf("\n0.Exit\n1.Add a number\n2.Delete a number\n3.Find the maximum number\n4.Find the minimum number\n5.Sum of numbers");
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            show_record(arr);
            if (is_array_full(arr))
            {    
                addnum(arr);
                show_record(arr);
            }
            else
                printf("\nArray is full");
            break;
        
        case 2:
            show_record(arr);
            if (is_array_empty(arr))
            {
                delnum(arr);
                show_record(arr);
            }
            else
            {
                printf("\nArray is empty");
            }
            break;
        
        case 3:
            show_record(arr);
            if (is_array_empty(arr))
            {
                num = findmax(arr);
                printf("\nMaximum Number : %d",num);
            }
            break;
        
        case 4:
            show_record(arr);
            if (is_array_empty(arr))
            {
                num = findmin(arr);
                printf("\nMinimum Number : %d",num);
            }
            break;
        
        case 5:
            show_record(arr);
            if (is_array_empty(arr))
            {
                num = findsum(arr);
                printf("\nSum of numbers : %d",num);
            }
            break;
        }
    } while (choice != 0);
    
    return 0;
}

int findsum(int a[SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int findmin(int a[SIZE])
{
    int min = a[0];
    for (int i = 0; i < SIZE-1; i++)
    {
        if (min > a[i] && a[i] != 0)
        {
            min = a[i];
        }
    }    
    return min;
}

int findmax(int a[SIZE])
{
    int max = a[0];
    for (int i = 0; i < SIZE-1; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }    
    return max;
}

void delnum(int a[SIZE])
{
    int index;
    printf("\nEnter position : ");
    scanf("%d",&index);
    a[index] = 0;
}

void addnum(int a[SIZE])
{
    int index,num;
    printf("\nEnter position : ");
    scanf("%d",&index);
    printf("\nEnter number : ");
    scanf("%d",&num);
    a[index] = num;
}

int is_array_empty(int a[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] != 0)
        {
            return 1;
        }
    }
    return 0;
}

int is_array_full(int a[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] == 0)
        {
            return 1;
        }
    }
    return 0;
}

void show_record(int a[SIZE])
{
    printf("\nArray elements are : ");
    for (int i = 0; i < SIZE; i++)
        printf(" arr[%d] = %d ",i,a[i]);
}