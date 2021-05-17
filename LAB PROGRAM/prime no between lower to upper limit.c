#include<stdio.h>
#include<stdlib.h>
int main(void)
{

    int no, counter, lowerlimit, upperlimit;

    printf("\n Enter Lower limit ::");
    scanf("%d", &lowerlimit);

    printf("\n Enter Upper limit ::");
    scanf("%d", &upperlimit);
    
    printf("\n Prime no between %d to %d :: ", lowerlimit, upperlimit);

    //for(no=lowerlimit; no<=upperlimit; no++) // for loop
    no= lowerlimit;  //1 while
    while(no<upperlimit)  // 2 while
    {
        counter=2;
        while(counter<no)    
        {
            if(no%counter==0)
                break;
            counter++;
        } // end of while
        if(counter==no)
            printf("%6d", no);
        no++;  // 3 while
    }//end of for 
    return 0;
}