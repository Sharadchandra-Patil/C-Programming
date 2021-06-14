#include<stdio.h>
#pragma pack(1) 
typedef enum menuchoice
{
    Exit, WriteRecord, ReadRecord
}MENUCHOICE;
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void AcceptEmpInfo(struct emp *e1);
void PrintEmpInfo(const struct emp *e1);
void WriteDataIntoBinaryFile();
void ReadDataFromBinaryFile();
int MenuChoice();
int main()
{
    MENUCHOICE choice;
    do
    {
        choice=(MENUCHOICE) MenuChoice();
        switch (choice)
        {
            default:
                printf("\n Invalid choice");
             
                continue;
                   //break; 
                //return 0; prog ends
                //exit(0);prog ends
            case WriteRecord: // accept record
                WriteDataIntoBinaryFile();
                break;
            case ReadRecord: // read data from file
                ReadDataFromBinaryFile();
                break;
            case Exit:
                    return 0;
        }
        printf("\n enter 1 to continue o to exit ::");
        scanf("%d", &choice);

    }while(choice!=0);
   
    
    return 0;
}
void AcceptEmpInfo(struct emp *e1)
{
    printf("Enter empno :: ");
    scanf("%d", &e1->empno);
    printf("Enter name :: ");
    scanf("%s", e1->name);
    printf("Enter sal :: ");
    scanf("%f", &e1->sal);
    
    return ;
}

void WriteDataIntoBinaryFile()
{
    FILE *fpEmpWrite=NULL;
    struct emp e;

    fpEmpWrite=fopen("empdata.dat", "ab");
    if(fpEmpWrite==NULL)
        printf("Unable to open file");
    else
    {
        AcceptEmpInfo(&e);
         
        fwrite(&e,sizeof(e),1, fpEmpWrite);
        printf("\n record is added to file");
        fclose(fpEmpWrite);
    }
    return ;
}

void PrintEmpInfo(const struct emp *e1)
{
    printf("%d \t%s\t %f\n", e1->empno , e1->name, e1->sal);
    return ;
}

void ReadDataFromBinaryFile()
{
    FILE *fpEmpRead=NULL;
    struct emp e;
    int cnt=0;

    fpEmpRead=fopen("empdata.dat", "rb");
    if(fpEmpRead==NULL)
        printf("Unable to open file");
    else
    {
        // read 1st record
        //fread(&e, sizeof(e),1, fpEmpRead);
        //printf("\n empno   name   sal\n ");
        //PrintEmpInfo(&e);

    // read all records
        printf("\n empno   name   sal\n ");
        while(fread(&e, sizeof(e),1, fpEmpRead))
        {
            cnt++;
            PrintEmpInfo(&e);
        }
        fclose(fpEmpRead);
        printf("\n %d records is read from file", cnt);
    }
    return;
}
int MenuChoice()
{
    int choice;
    printf("\n 1. Accept new record \n 2. Display \n 0. exit");
    printf("\n Enter your choice:: ");
    scanf("%d",&choice);
    return choice;
}