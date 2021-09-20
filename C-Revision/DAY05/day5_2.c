#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int n,i;
    int *ptr=NULL;
    printf("Enter Number of elements you wish to insert in an array : ");
    scanf("%d",&n);
    //1. REQUEST FOR DYNAMIC MEMORY ALLOCATION (malloc)
    ptr=(int *)malloc(n*sizeof(int));
    //ptr=(int *)calloc(n,sizeof(int));
   

    if(ptr==NULL)
    {
        printf("Memory can not be allocated");
        return 0;
    }
    

    //2. IF MEMORY IS ALLOCATED , USE THAT MEMORY
    else
    {
        printf("\n Enter Array Elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("\n Array Elements are : ");
        for(i=0;i<n;i++)
        {
            printf(" %d \t ",ptr[i]);
        }

    }
    //3. RELEASE THE MEMORY 
    free(ptr); // lead to dangling pointer and memory leakage
    ptr=NULL; // avoid memory leakage 

    return 0;
}