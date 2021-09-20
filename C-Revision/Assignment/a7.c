#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10

struct Name
{
    char fname[10];
    char mname[10];
    char lname[10];
};

struct Address
{
    int hno;
    char area_name[10];
    char city[10];
    char tal[10];
    char dist[10];
    int pin;
};

struct Contact
{
    long int num;
    char emailid[25];
};

struct Person
{
    struct Name name;
    struct Address address;
    struct Contact contact;
};

struct Account
{
    int empid;
    int balance;
    struct Person person;
};

typedef struct Element
{
    struct Account account;
    struct Element *prev;
    struct Element *next;
}data;

data *head = NULL;

data *create(struct Account acc);
void addlast(struct Account acc);
void addfirst(struct Account acc);
void show_record_forward();
void show_record_backward();
struct Account accept();
void display(struct Account acc);
void byaccid();
void byaccname();
int menu();

int main(void)
{
    struct Account xyz[SIZE];
    int ch,i = 0;

    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            xyz[i] = accept();
            addfirst(xyz[i]);
            i++;
            break;
        
        case 2:
            xyz[i] = accept();
            addlast(xyz[i]);
            i++;
            break;
        
        case 3:
            show_record_forward();
            break;
        
        case 4:
            show_record_backward();
            break;

        case 5:
            byaccid();
            break;

        case 6:
            byaccname();
            break;        
        }
    } while (ch != 0);
    
    return 0;
}

int menu()
{
    int choice;
    printf("\n0.Exit");
    printf("\n1.Add at first position");
    printf("\n2.Add at last position");
    printf("\n3.Display all elements forward");
    printf("\n4.Display all elements backward");
    printf("\n5.Search by Account ID");
    printf("\n6.Search by Account holder name");
    printf("\nEnter choice : ");
    scanf("%d",&choice);

    return choice;
}

void byaccname()
{
    char fname[10];
    char mname[10];
    char lname[10];
    printf("\nEnter first name : ");
    scanf("%s",fname);
    printf("\nEnter middle name : ");
    scanf("%s",mname);
    printf("\nEnter last name : ");
    scanf("%s",lname);

    if (head != NULL)
    {
        data *start = head;
        do
        {
            if ((strcasecmp((start->account.person.name.fname),fname) == 0) && (strcasecmp((start->account.person.name.mname),mname) == 0) && (strcasecmp((start->account.person.name.lname),lname) == 0))
            {
                printf("\nAccount found :-");
                display(start->account);
                return ;
            }
            start = start->next;
        } while (start != NULL);
        printf("\nAccount not found\n");
    }
    else
    {
        printf("\nList is empty !!!");
    }
}

void byaccid()
{
    int num;
    printf("\nEnter account ID : ");
    scanf("%d",&num);
    if (head != NULL)
    {
        data *start = head;
        do
        {
            if (start->account.empid == num)
            {
                printf("\nAccount found :-");
                display(start->account);
                return ;
            }
            start = start->next;
        } while (start != NULL);
        printf("\nAccount not found\n");
    }
    else
    {
        printf("\nList is empty !!!");
    }
}

void show_record_backward()
{
    if (head != NULL)
    {
        data *start = head;
        while (start->next != NULL)
        {
            start = start->next;
        }
        do
        {
            display((start->account));
            start = start->prev;
        } while (start != NULL);
        printf("\n-> Head\n");
    }
    else
    {
        printf("\nList is empty !!!");
    }
}

void show_record_forward()
{
    if (head != NULL)
    {
        data *start = head;
        printf("\nHead ->\n");
        do
        {
            display((start->account));
            start = start->next;
        } while (start != NULL);
    }
    else
    {
        printf("\nList is empty !!!");
    }
}

void addlast(struct Account acc)
{
    data *new = create(acc);

    if (head == NULL)
    {
        head = new;
        new->next = NULL;
        new->prev = NULL;
    }
    else
    {
        data *start = head;
        while (start->next != NULL)
        {
            start = start->next;
        }
        new->next = NULL;
        new->prev = start;
        start->next = new;
    }
}

void addfirst(struct Account acc)
{
    data *new = create(acc);

    if (head == NULL)
    {
        head = new;
        new->next = NULL;
        new->prev = NULL;
    }
    else
    {
        data *start = head;
        start->prev = new;
        new->prev = NULL;       
        new->next =start;
        head = new; 
    }
}
    
data *create(struct Account abc)
{
    data *new = (data *)malloc(sizeof(data));
    if (new == NULL)
    {
        printf("\nCannot allocate memory");
        exit(1);
    }
    new->account = abc;
    new->next = NULL;
    new->prev = NULL;

    return new;
}

struct Account accept()
{
    struct Account ele;
    printf("\nEnter ID : ");
    scanf("%d",&ele.empid);
    printf("\nEnter Balance : ");
    scanf("%d",&ele.balance);
    printf("\nEnter first name : ");
    scanf("%s",ele.person.name.fname);
    printf("\nEnter middle name : ");
    scanf("%s",ele.person.name.mname);
    printf("\nEnter last name : ");
    scanf("%s",ele.person.name.lname);
    printf("\nEnter Address : ");
    printf("\nHouse no. : ");
    scanf("%d",&ele.person.address.hno);
    printf("\nArea name : ");
    scanf("%*c");
    scanf("%[^\n]s",ele.person.address.area_name);
    printf("\nCity name : ");
    scanf("%s",ele.person.address.city);
    printf("\nTaluka name : ");
    scanf("%s",ele.person.address.tal);
    printf("\nDistrict name : ");
    scanf("%s",ele.person.address.dist);
    printf("\nPincode : ");
    scanf("%d",&ele.person.address.pin);
    printf("\nEnter Mobile Number : ");
    scanf("%ld",&ele.person.contact.num);
    printf("\nEnter Email ID : ");
    scanf("%s",ele.person.contact.emailid);

    return ele;
}

void display(struct Account acc)
{
    printf("\nID : %d",acc.empid);
    printf("\nAccount balance : %d",acc.balance);
    printf("\nName of Account Holder : %s %s %s",acc.person.name.fname,acc.person.name.mname,acc.person.name.lname);
    printf("\nAddress : %d, %s, %s, Tal. %s, Dist. %s - %d",acc.person.address.hno,acc.person.address.area_name,acc.person.address.city,acc.person.address.tal,acc.person.address.dist,acc.person.address.pin);
    printf("\nPh. no. %ld \nEmail ID - %s\n",acc.person.contact.num,acc.person.contact.emailid);
}