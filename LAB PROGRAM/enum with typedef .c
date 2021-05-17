#include<stdio.h>
/*typedef enum month
{  //1      2    3
    jan=1, feb , mar   
}MONTH;*/

enum month
{  //1      2    3
    jan=1, feb , mar   
};
typedef enum month MONTH;
int main()
{
    MONTH m;//enum month m;
    int no;
    int year;
    printf("\n Enter Month :: ");
    //scanf("%d", &m); // way1
   scanf("%d", &no);
    // m= (MONTH) no; // way 2 using int
    
    switch(no) // way3 using switch and int
    {
        case 1: m=jan; break;
        case 2: m=feb; break;
        case 3: m=mar; break;
    }

   switch(m)
   {
       default : printf("invalaid month");break;
       case jan: printf(" jan has 31 days"); break;
       case feb:
               printf("\n Enter Year :: ");
               scanf("%d", &year);
               if(year%4==0) 
                    printf(" feb has 29 days"); 
                else 
                       printf(" feb has 28 days"); 
                break;
       case mar: printf(" mar has 31 days"); break;
   }

    return 0;
}