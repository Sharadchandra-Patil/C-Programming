#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

struct Movie
{
    int id;
    char name[40];
    int year;
    char genre[5][20];
};

typedef struct Element
{
    struct Movie movie;
    struct Element *next;
}node;

node *head = NULL;

void data();
node *create();
void adddata();
void display(struct Movie xyz);
void showrecord();
int menu();
void byname();
void bygenre();

int main(void)
{
    int ch;
    adddata();

    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            showrecord();
            break;
        
        case 2:
            byname();
            break;
        
        case 3:
            bygenre();
            break;
        }
    } while (ch !=0);

    return 0;
}

int menu()
{
    int choice;

    printf("\n0.Exit");
    printf("\n1.Show all movies");
    printf("\n2.Search by name");
    printf("\n3.Search by genre");
    printf("\nEnter choice : ");
    scanf("%d",&choice);

    return choice;
}

void bygenre()
{
    char search[20];
    printf("\nEnter genre : ");
    scanf("%s",search);
    if (head != NULL)
    {
        node *start = head;
        do
        {
            for (int i = 0; i < 5; i++)
            {
                if (strcasecmp((start->movie.genre[i]),search) == 0)
                {
                    display((start->movie));
                    break;
                }
            }
            start = start->next;
        } while (start != NULL);
    }
    else
    {
        printf("\nList is empty");
    }
}

void byname()
{
    char search[40];
    printf("\nEnter name of the movie : ");
    scanf("%*c");
    scanf("%[^\n]s",search);
    if (head != NULL)
    {
        node *start = head;
        do
        {
            if (strcasecmp((start->movie.name),search) == 0)
            {
                display((start->movie));
                break;
            }
            
            start = start->next;
        } while (start != NULL);
    }
    else
    {
        printf("\nList is empty");
    }
}

void adddata()
{
    struct Movie mov[SIZE];
    mov[0].id=1;
    strcpy((mov[0].name),"Toy Story");
    mov[0].year = 1995;
    strcpy((mov[0].genre[0]),"Adventure");
    strcpy((mov[0].genre[1]),"Animation");
    strcpy((mov[0].genre[2]),"Children");
    strcpy((mov[0].genre[3]),"Comedy");
    strcpy((mov[0].genre[4]),"Fantasy");
    node *new1 = create(mov[0]);
    head = new1;

    mov[1].id = 2;
    strcpy((mov[1].name),"Jumanji");
    mov[1].year = 1995;
    strcpy((mov[1].genre[0]),"Adventure");
    strcpy((mov[1].genre[1]),"Children");
    strcpy((mov[1].genre[2]),"Fantasy");
    strcpy((mov[1].genre[3]),"");
    strcpy((mov[1].genre[4]),"");
    node *new2 = create(mov[1]);
    new1->next = new2;

    mov[2].id = 3;
    strcpy((mov[2].name),"Grumpier Old Men");
    mov[2].year = 1995;
    strcpy((mov[2].genre[0]),"Comedy");
    strcpy((mov[2].genre[1]),"Romance");
    strcpy((mov[2].genre[2]),"");
    strcpy((mov[2].genre[3]),"");
    strcpy((mov[2].genre[4]),"");
    node *new3 = create(mov[2]);
    new2->next = new3;

    mov[3].id = 4;
    strcpy((mov[3].name),"Waiting to Exhale");
    mov[3].year = 1995;
    strcpy((mov[3].genre[0]),"Comedy");
    strcpy((mov[3].genre[1]),"Drama");
    strcpy((mov[3].genre[2]),"Romance");
    strcpy((mov[3].genre[3]),"");
    strcpy((mov[3].genre[4]),"");
    node *new4 = create(mov[3]);
    new3->next = new4;

    mov[4].id = 5;
    strcpy((mov[4].name),"Father of the Bride Part 2");
    mov[4].year = 1995;
    strcpy((mov[4].genre[0]),"Comedy");
    strcpy((mov[4].genre[1]),"");
    strcpy((mov[4].genre[2]),"");
    strcpy((mov[4].genre[3]),"");
    strcpy((mov[4].genre[4]),"");
    node *new5 = create(mov[4]);
    new4->next = new5;

    mov[5].id = 6;
    strcpy((mov[5].name),"Heat");
    mov[5].year = 1995;
    strcpy((mov[5].genre[0]),"Action");
    strcpy((mov[5].genre[1]),"Crime");
    strcpy((mov[5].genre[2]),"Thriller");
    strcpy((mov[5].genre[3]),"");
    strcpy((mov[5].genre[4]),"");
    node *new6 = create(mov[5]);
    new5->next = new6;

    mov[6].id = 7;
    strcpy((mov[6].name),"Sabrina");
    mov[6].year = 1995;
    strcpy((mov[6].genre[0]),"Comedy");
    strcpy((mov[6].genre[1]),"Romance");
    strcpy((mov[6].genre[2]),"");
    strcpy((mov[6].genre[3]),"");
    strcpy((mov[6].genre[4]),"");
    node *new7 = create(mov[6]);
    new6->next = new7;

    mov[7].id = 8;
    strcpy((mov[7].name),"Tom and Huck");
    mov[7].year = 1995;
    strcpy((mov[7].genre[0]),"Adventure");
    strcpy((mov[7].genre[1]),"Children");
    strcpy((mov[7].genre[2]),"");
    strcpy((mov[7].genre[3]),"");
    strcpy((mov[7].genre[4]),"");
    node *new8 = create(mov[7]);
    new7->next = new8;

    mov[8].id = 9;
    strcpy((mov[8].name),"Sudden Death");
    mov[8].year = 1995;
    strcpy((mov[8].genre[0]),"Action");
    strcpy((mov[8].genre[1]),"");
    strcpy((mov[8].genre[2]),"");
    strcpy((mov[8].genre[3]),"");
    strcpy((mov[8].genre[4]),"");
    node *new9 = create(mov[8]);
    new8->next = new9;

    mov[9].id = 10;
    strcpy((mov[9].name),"Goldeneye");
    mov[9].year = 1995;
    strcpy((mov[9].genre[0]),"Action");
    strcpy((mov[9].genre[1]),"Adventure");
    strcpy((mov[9].genre[2]),"");
    strcpy((mov[9].genre[3]),"");
    strcpy((mov[9].genre[4]),"");
    node *new10 = create(mov[9]);
    new9->next = new10;

    new10->next = NULL;

}

void showrecord()
{
    if (head != NULL)
    {
        node *start = head;
        printf("\nHead ->\n");
        do
        {
            display((start->movie));
            start = start->next;
        } while (start != NULL);
    }
    else
    {
        printf("\nList is empty");
    }
    
}

void display(struct Movie xyz)
{
    printf("\nMovie ID : %d",xyz.id);
    printf("\nMovie name : %s",xyz.name);
    printf("\nMovie year : %d",xyz.year);
    printf("\nGenre : ");
    for (int j = 0; j < 5; j++)
    {
        printf("%s ",xyz.genre[j]);
    }
    printf("\n");
}

node *create(struct Movie abc)
{
    node *new = (node *)malloc(sizeof(node));
    if (new == NULL)
    {
        printf("\nCannot allocate memory");
        exit(1);
    }
    new->movie = abc;
    new->next = NULL;

    return new;
}