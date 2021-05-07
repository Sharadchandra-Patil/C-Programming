#include<stdio.h>
/*
    goto
    break
    continue 
    return 
*/
int main()
{
        int rank;

        START: 
        printf("Enter the rank");
        scanf("%d",&rank);

        if(rank<=1000)   // 900 
           goto COURSE;
        else 
            goto START;   


         COURSE:
         printf("Welcome to sunbeam\n");
         printf("Course begins All the best\n");  

         printf("Placment begins\n");   




    return 0; 
}

