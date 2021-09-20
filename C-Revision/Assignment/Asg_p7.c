/*Implement doubly linked list of bank accounts.
Each account has information including id,
type, balance and account holder. The account holder details include name, address &
contact details. Write a menu-driven program to implement add first, add last, display all
(forward), display all (backward), find by account id, find by account holder name, delete all
functionalities.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node
{
    struct node *next;
    struct node *prev;
    struct acc_holder
    {
        int id;
        char type[10];
        float balance;
        char name[20];
        char add[20];
        char contact[11];
    } acc;
} node_t;

node_t *head = NULL;

node_t obj;
int menu(void);
node_t *create_node(void);
void add_last(void);
void add_first(void);
int node_count(void);
void display_forward(void);
void display_backward(void);
void find_by_id(void);
void find_by_account_holder_name(void);
void delete_all(void);
int main(void)
{
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            add_first();
            break;
        case 2:
            add_last();
            break;

        case 3:
            display_forward();
            break;
        case 4:
            display_backward();
            break;
        case 5:
            find_by_id();
            break;
        case 6:
            find_by_account_holder_name();
            break;
        case 7:
            delete_all();
            break;
        }
    }
}
int menu(void)
{
    int choice;
    while (1)
    {
        printf("\n---------------------------\n");
        printf("Banking system menu\n");
        printf("Press 1 to Add first\n");
        printf("Press 2 to Add Last\n");
        printf("Press 3 to Display all(from Top)\n");
        printf("Press 4 to Display all(from Last)\n");
        printf("Press 5 to Find by id\n");
        printf("Press 6 to Find by name\n");
        printf("Press 7 to Delete All\n");
        printf("Press 0 to exit\n");
        printf("---------------------------\n");
        printf("Enter choice(0-7): ");
        scanf("%d", &choice);
        if (choice == 0)
            exit(0);
        else if (choice > 0 && choice <= 7)
            break;
        else
            printf("\nInvalid choice !!");
    }
    system("CLS");
    return choice;
}
node_t *create_node(void)
{
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    if (temp != NULL)
    {
        printf("\n   -:: Enter Details ::- \n");
        printf("\nId       : ");
        scanf("%d", &temp->acc.id);
        printf("first_Name : ");
        scanf("%s", &temp->acc.name);
        printf("acc_Type   : ");
        scanf("%s", &temp->acc.type);
        printf("Balance    : ");
        scanf("%f", &temp->acc.balance);
        printf("Address    : ");
        scanf("%s", &temp->acc.add);
        printf("Contact    : ");
        scanf("%s", &temp->acc.contact);
        printf("\n");
        temp->next = NULL;
        system("CLS");
    }
    else
    {
        printf(" Malloc failed !!");
        exit(0);
    }

    return temp;
}

void add_last(void)
{
    node_t *newnode = create_node();
    printf("\n Data entered successfully !!");
    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
        newnode->prev = newnode;
    }
    else
    {
        node_t *last;
        last = head->prev;
        last->next = newnode;
        newnode->prev = last;
        head->prev = newnode;
        newnode->next = head;
    }
}
void add_first(void)
{
    node_t *newnode = create_node();
    printf("\n Data entered successfully !!");
    if (head == NULL)
    {
        head = newnode;
        head->next = newnode;
        head->prev = newnode;
    }
    else
    {
        node_t *last = head->prev;
        newnode->next = head;
        newnode->prev = last;
        head = newnode;
        last->next = head;
    }
}
void display_forward(void)
{
    if (head != NULL)
    {
        node_t *temp = head;
        printf("\nRecord from first to Last :: \n");

        do
        {
            printf("\n%d  %s  %.1f  %s  %s  %s", temp->acc.id, temp->acc.name, temp->acc.balance, temp->acc.type, temp->acc.add, temp->acc.contact);
            // printf("\naddress  contact\n", , );
            temp = temp->next;

        } while (temp != head);
    }
    else
        printf("\nList is empty !!");
}
void display_backward(void)
{
    if (head != NULL)
    {
        printf("\nRecord from Last to Top :: \n");
        node_t *temp = head->prev;
        do
        {
            printf("\n%d  %s  %.1f  %s  %s  %s", temp->acc.id, temp->acc.name, temp->acc.balance, temp->acc.type, temp->acc.add, temp->acc.contact);
            temp = temp->prev;

        } while (temp != head);
        printf("\n%d  %s  %.1f  %s  %s  %s", temp->acc.id, temp->acc.name, temp->acc.balance, temp->acc.type, temp->acc.add, temp->acc.contact);
    }
    else
        printf("\nList is empty !!");
}
void find_by_id(void)
{
    if (head != NULL)
    {
        int id, flag = 0;
        printf("\nEnter id to find : ");
        scanf("%d", &id);

        node_t *temp = head;
        do
        {
            if (temp->acc.id == id)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
        } while (temp != head);
        if (flag == 0)
            printf("No data found !! ");
        else
            printf("\n%d  %s  %.1f  %s  %s  %s", temp->acc.id, temp->acc.name, temp->acc.balance, temp->acc.type, temp->acc.add, temp->acc.contact);
    }
    else
        printf("\nList is empty !!");
}
void find_by_account_holder_name(void)
{
    if (head != NULL)
    {
        int flag = 0;
        char name[20];
        printf("\nEnter Account holder Name to find : ");
        scanf("%s", &name);

        node_t *temp = head;
        do
        {
            if (strcmp(temp->acc.name, name) == 0)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
        } while (temp != head);
        if (flag == 0)
            printf("No data found !! ");
        else
            printf("\n%d  %s  %.1f  %s  %s  %s", temp->acc.id, temp->acc.name, temp->acc.balance, temp->acc.type, temp->acc.add, temp->acc.contact);
    }
    else
        printf("\nList is empty !!");
}
void delete_all(void)
{
    if (head != NULL)
    {
        node_t *temp, *current;
        current = head->next;
        while (temp != head)
        {
            temp = current->next;
            free(current);
            current = temp;
        }
        free(head);
        head = NULL;
        printf("\nAll nodes Deleted !!");
    }
    else
        printf("\nList is already empty !!");
}