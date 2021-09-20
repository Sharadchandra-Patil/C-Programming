
#include<stdio.h>


void accept_data(int a[4]); // function taking array as an argument

int main(void)
{
    int a[4],b[4];
    accept_data(a); //called a function by passing name of an array
    // name of an array holds base address 
    // accept_data(a[4]); //single elements 

    accept_data(b);
        return 0;
}
void accept_data(int a[4])
{
    int i;
    printf("Enter  Array Elements :");
    for(i=0;i<4;i++)
      //  scanf("%d",&a[i]);
        scanf("%d",(a+i));
    printf("\n Array Elements are :");
    for(i=0;i<4;i++)
        printf(" %d \t %u",a[i],&a[i]);
        //printf(" %d \t %u",*(a+i),(a+i));
}

        

/*
int main(void)
{
    int a[4]={11,22,33,44};
     // 288   292   296   300
    printf("Base Address : %u ",a);
   // printf("\n *(a+2) = %d",*(a+2));
    printf("\n *(a+1) = %d",*(a+1));
    //*(a+1)
    //*(288+1)
    //*(292)
    //22 
    //printf("\n *a+1 = %d",*a+1);
    // *a+1
    // *288+1
    // 11+1
    // 12 

    //printf("\n *(a+1)+40 = %d",*(a+1)+40);
    //*(a+1)+40
    //*(288+1)+40
    //*(292)+40
    // 22 + 40
    // 62 

    //*(&a+1) ==> &(next block Address)   ==> garbage 

    //*(a+40) ==> *(288+40) ==> *(288 + 160 ) ==> * (440) ==> GARBAGE 
    
    printf("\n Addition : %d",a[1]+a[2]);
    printf("\n Addition : %d",*(a+1)+*(a+2));







    return 0;
}

*/



/*
int main(void)
{
    int a[4]={11,22,33,44};
     // 288   292   296   300
    printf("Base Address : %u ",a);
    printf("\n a[0] = %d *a = %d",a[0],*a);
    printf("\n a[1] = %d *(a+1) = %d",a[1],*(a+1));
    //*(a+1)
    //*(288+1)
    //*(292)
    // 22

    //a[i] = *(a+i) 



    return 0;
}

*/