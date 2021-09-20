#include<stdio.h>
#include<stdlib.h>

#define SIZE 2
#define NO 6

struct Subject
{
    char subject[10];
    int marks;
};


struct Student
{
    int rno;
    char name[10];
    int std;
    struct Subject sub[NO];
};

typedef struct 
{
    struct Student student[SIZE];
    int rear;
    int front;
}cqueue;

void innit(cqueue *que);
int queue_full(cqueue *que);
int queue_empty(cqueue *que);
struct Student accept();
void enqueue(cqueue *que, struct Student abc);
void dequeue(cqueue *que);
void disp(cqueue *que, struct Student abc);
int front(cqueue *que);


enum OPTIONS{EXIT,ENQUEUE,DEQUEUE};
int main(void)
{
    cqueue q;
    struct Student xyz;
    int ch;

    innit(&q);

    do
    {
        printf("\n0.Exit\n1.Enqueue\n2.Dequeue\n\nEnter Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 0:
            exit(0);
            break;

        case 1:
            if (!queue_full(&q))
            {
                xyz = accept();
                enqueue(&q, xyz);
                disp(&q, xyz);
            }
            else
            {
                printf("\nQueue is full!!!");
            }
            break;
        
        case 2:
            if (!queue_empty(&q))
            {
                printf("\nElement to be dequeued : ");
                disp(&q, xyz);;
                dequeue(&q);
            }
            else
            {
                printf("\nQueue is empty!!!");
            }
            break;
        }

    } while (ch!=0);
        
    return 0;
}


void dequeue(cqueue *que)
{
    if (que->front == que->rear)
    {
        que->front = que->rear =-1;
    }
    else
    {
        que->front = (que->front + 1)%SIZE;
    }
    
}

void disp(cqueue *que, struct Student abc)
{
    printf("\nStuent details are : ");
    printf("\nRoll no. : %d",que->student[que->front].rno);
    printf("\nName : %s",que->student[que->front].name);
    printf("\nStandard : %d",que->student[que->front].std);
    printf("\nSubject details are : ");
    for (int j = 0; j < NO; j++)
    {
        printf("\nSubject = %s",que->student[que->front].sub[j].subject);
        printf("\nMarks = %d",que->student[que->front].sub[j].marks);
    }
    
}

void enqueue(cqueue *que, struct Student abc)
{
    que->rear = (que->rear + 1)%SIZE;
    que->student[que->rear] = abc;

    if (que->front == -1)
        que->front=0;
}

struct Student accept()
{
    struct Student stud;
    printf("\nEnter Student Details : ");
    printf("\nEnter Roll no. : ");
    scanf("%d",&stud.rno);
    printf("\nEnter name : ");
    scanf("%s",stud.name);
    printf("\nEnter class : ");
    scanf("%d",&stud.std);
    for (int i = 0; i < NO; i++)
    {
        printf("\nSubject no. %d name : ",i);
        scanf("%s",stud.sub[i].subject);
        printf("\nSubject no. %d marks : ",i);
        scanf("%d",&stud.sub[i].marks);
    }
    return stud;
}

int queue_full(cqueue *que)
{
    return (que->front == ((que->rear + 1)%SIZE));
}

int queue_empty(cqueue *que)
{
    return (que->rear == -1 && que->front == que->rear);
}

void innit(cqueue *que)
{
    que->front = -1;
    que->rear = -1;
}