/*A CSV file contains movies data in given form. Read the file and load data into a singly linked
list of movie objects. Also give facility to find movies by name and by genre.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define B_SIZE 150

typedef struct node
{
    struct node *next;
    struct movies
    {
        int movie_id;
        char title[50];
        char genre[150];
    } obj;
} node_t;

node_t *head = NULL;
char *token;
node_t *create_node(void);
void display(void);
void add_node(node_t *temp);
void find_mov_by_name(void);
void find_mov_by_genre(void);
void d_main(void);
int menu(void);
int main(void)
{
    FILE *fp;
    char buffer[B_SIZE];
    fp = fopen("movie.csv", "r+");
    while (fgets(buffer, B_SIZE, fp))
    {
        node_t *temp;
        token = strtok(buffer, ",");
        if (token != NULL)
            temp = create_node();
        int flag = 0;
        while (token != NULL)
        {
            if (flag == 0)
                temp->obj.movie_id = atoi(token);
            else if (flag == 1)
                strcpy(temp->obj.title, token);
            else if (flag == 2)
                strcpy(temp->obj.genre, token);
            flag++;
            token = strtok(NULL, ",");
        }
        add_node(temp);
    }
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            find_mov_by_name();
            break;
        case 2:
            find_mov_by_genre();
            break;
        case 3:
            display();
            break;
        }
    }
    return 0;
}

int menu(void)
{
    int choice;
    while (1)
    {
        printf("\n0. Exit \n");
        printf("1. Find movies by name\n");
        printf("2. Find movies by genre\n");
        printf("3. Display csv file \n");
        printf("Enter choice(0-3) : ");
        scanf("%d", &choice);
        if (choice == 0)
            exit(0);
        else if (choice > 0 && choice <= 3)
        {
            break;
        }
        else
        {
            system("CLS");
            printf("Invalid choice !! \n");
        }
    }
    system("CLS");
    return choice;
}

node_t *create_node(void)
{
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    if (temp == NULL)
    {
        printf("Malloc failed !!");
        exit(0);
    }
    else
        temp->next = NULL;
    return temp;
}
void add_node(node_t *temp)
{
    if (head == NULL)
        head = temp;
    else
    {
        node_t *trav = head;
        while (trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = temp;
    }
}

void display(void)
{
    node_t *trav = head;
    do
    {
        printf("%d  %s  %s \n", trav->obj.movie_id, trav->obj.title, trav->obj.genre);
        trav = trav->next;
    } while (trav != NULL);
}

void find_mov_by_name(void)
{
    char name[20];
    printf("Enter movie name :");
    scanf("%*c");
    scanf("%[^\n]s", name);
    node_t *trav = head;
    char *ret;
    int flag = 1;
    while (trav != NULL)
    {
        ret = strstr(trav->obj.title, name);
        if (ret)
        {
            printf("%d  %s  %s ", trav->obj.movie_id, trav->obj.title, trav->obj.genre);
            flag = 0;
        }
        trav = trav->next;
    }
    if (flag == 1)
        printf("no Record found!\n");
}
void find_mov_by_genre(void)
{
    char genre[20];
    printf("Enter movie genre :");
    scanf("%*c");
    scanf("%[^\n]s", genre);
    node_t *trav = head;
    char *ret;
    int flag = 1;
    while (trav != NULL)
    {
        ret = strstr(trav->obj.genre, genre);
        if (ret)
        {
            printf("%d  %s  %s \n", trav->obj.movie_id, trav->obj.title, trav->obj.genre);
            flag = 0;
        }
        trav = trav->next;
    }
    if (flag == 1)
        printf("no Record found!\n");
}