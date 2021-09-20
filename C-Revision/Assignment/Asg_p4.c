#include <stdio.h>
#include <stdlib.h>
struct books
{
    int id;
    char name[15];
    int price;
} b[10];
void get_data(void);
void desc_bubble_price(void);
void display(void);
void desc_merge_name(void);
int main(void)
{
    get_data();
    //system("CLS");
    printf("\nBefore sorting\n");
    printf("-----------------");
    display();
    desc_bubble_price();
    printf("\nAfter sorting\n");
    printf("-----------------");
    display();
}
void get_data(void)
{

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nEnter data for book #%d", i + 1);

        printf("\nEnter id :");
        scanf("%d", &b[i].id);

        printf("Enter Name : ");
        scanf("%s", &b[i].name);

        printf("Enter Price :");
        scanf("%d", &b[i].price);
    }
}
void desc_bubble_price(void)
{
    struct books temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < (3 - i); j++)
        {
            if (b[j].price < b[j + 1].price)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}
void display(void)
{
    printf("\n\nId\tName\tPrice\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%s\t%d\n", b[i].id, b[i].name, b[i].price);
    }
}
