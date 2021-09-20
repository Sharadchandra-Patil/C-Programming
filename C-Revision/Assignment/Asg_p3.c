#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void find_largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\n::Maximum Element ::\n");
    for (int i = 0; i < 10; i++)
    {
        if (max == arr[i])
            printf("[%d] = %d ", i, arr[i]);
    }
}
void find_min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] != 0)
            if (arr[i] < min)
                min = arr[i];
    }
    printf("\n::Minimum Element ::\n");
    for (int i = 0; i < 10; i++)
    {
        if (min == arr[i])
            printf("[%d] = %d ", i, arr[i]);
    }
}
int menu(void)
{
    int choice;
    while (1)
    {
        printf("\n*********************");
        printf("\n0. Exit\n");
        printf("1. add number \n");
        printf("2. delete number\n");
        printf("3. maximum number\n");
        printf("4. minimum number\n");
        printf("5. sum of numbers\n");
        printf("6. Show Array elements\n");
        printf("**********************\n");
        printf("----------------------\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        printf("----------------------\n");
        //system("CLS");
        if (choice == 0)
            exit(0);
        else if (choice > 0 && choice <= 6)
            break;
    }
    return choice;
}
int main(void)
{
    int arr[10] = {};
    int num, loc;
    int full_flag = 0;
    int empty_flag = 0;
    int n;
    int f_check = 0;
    int sum = 0;
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] == 0)
                    full_flag = 1;
            }
            if (full_flag == 1)
            {
                printf("Available locations :\n");
                for (int i = 0; i < 10; i++)
                {
                    if (i == 5)
                        printf("\n");
                    if (arr[i] == 0)
                        printf("[ %d ]", i);
                }
                while (1)
                {
                    printf("\nEnter location : ");
                    scanf("%d", &loc);
                    if (loc >= 0 && loc < 10 && arr[loc] == 0)
                        break;
                    else
                        printf("\nEnter valid loacton !!");
                }
                while (1)
                {
                    int num;
                    printf("\nEnter number : ");
                    scanf("%d", &num);
                    if (num != 0)
                    {
                        arr[loc] = num;
                        break;
                    }
                    else
                        printf("\nZero is not allowed !!");
                }
            }
            else
                printf("\nArray is full !!");
            break;

        case 2:

            for (int i = 0; i < 10; i++)
            {
                if (arr[i] != 0)
                    empty_flag = 1;
            }
            if (empty_flag == 1)
            {
                printf("\nAvailable locations :\n");
                for (int i = 0; i < 10; i++)
                {
                    if (i == 5)
                        printf("\n");
                    if (arr[i] != 0)
                        printf("\n [ %d ] = %d ", i, arr[i]);
                }
                while (1)
                {
                    printf("\n Enter location : ");
                    scanf("%d", &loc);
                    if (loc >= 0 && loc < 10 && arr[loc] != 0)
                        break;
                    else
                        printf("\n Enter valid location !!");
                }
                arr[loc] = 0;
            }
            else
                printf("\nArray is empty !!\n");
            break;
        case 3:
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] != 0)
                    n++;
            }
            find_largest(arr, n);
            break;
        case 4:
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] != 0)
                    n++;
            }
            find_min(arr, n);
            break;
        case 5:
            for (int i = 0; i < 10; i++)
            {
                sum = sum + arr[i];
            }
            printf("\n Sum : %d", sum);
            break;

        case 6:
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] != 0)
                    f_check = 1;
            }
            if (f_check == 1)
            {
                printf(":: Array Elements ::\n");
                for (int i = 0; i < 10; i++)
                {
                    if (arr[i] != 0)
                        printf("    [ %d ] = %d\n", i, arr[i]);
                }
            }
            else
                printf("\nArray is empty !!\n");

            break;
        }
    }
}
