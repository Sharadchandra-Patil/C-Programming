#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL, no, index;
    printf("\n How many elemets u want :: ");
    scanf("%d", &no);

    ptr=(int*) malloc(sizeof(int)*no);
    if(ptr==NULL)
        printf("\n unable to allocate memeory");
    else
    {
        printf("\n Enter elements of array :: ");
        for(index=0; index<no; index++)
        {
            printf("ptr[%d]::", index);
           // scanf("%d", &ptr[index]);
            //scanf("%d", &index[ptr]);
            //scanf("%d", (ptr+index));
            scanf("%d", (index+ptr));
        }
        printf("\n Elements of array :: ");
        for(index=0; index<no; index++)
        {
           // printf("\n%d [%u]",ptr[index], &ptr[index]);
           // printf("\n%d [%u]",index[ptr], &index[ptr]);
           //printf("\n%d [%u]",*(ptr+index), (ptr+index));
              printf("\n%d [%u]",*(index+ptr), (index+ptr));
        }

       free(ptr);
       ptr=NULL;
       printf("\n memnory freed");

    }

    return 0;
}
// valgrind