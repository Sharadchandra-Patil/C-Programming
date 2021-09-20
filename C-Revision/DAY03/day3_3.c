#include<stdio.h>


int main(void)
{
    int a[4];
    int i;
    printf("Enter Array Elements :");
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    printf("\n Array Elements are :");
    for(i=0;i<4;i++)
        printf(" %d \t %u",a[i],&a[i]);
        //printf(" %d \t %u",i[a],&a[i]); 
        // a[i] = i[a] //valid 

    printf("\n Size : %d",sizeof(a));
    return 0;

}


/*
int main(void)
{
    int a[5]={1,2,3,4,5,6,7,8}; //error
}
*/


/*
int main(void)
{
    int a[5]={90,30,20};
    // if we try to assign partial elements to an array at the 
    //time of its declaration
    // remaning elements will recieve 0 as the intial value 
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d \t at %u \n",a[i],&a[i]);
    }

    return 0;
}
*/




/*
int main(void)
{
    int a[5];
    // if we try to assign partial elements to an array at the later stage 
    //of its declaration
    // remaning elements will recieve garbage values .
    int i;
    a[0]=10;
    a[1]=20;
    a[2]=30;

    for(i=0;i<5;i++)
    {
        printf("%d \t at %u \n",a[i],&a[i]);
    }

    return 0;
}
*/



/*
int main(void)
{
    int a[5];
    int i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;

    for(i=0;i<5;i++)
    {
        printf("%d \t",a[i]);
    }

    return 0;
}

*/


/*
int main(void)
{
    int a[3]; //valid declaration //12 bytes 
   // int b[]; // invalid declaration 
   int c[]={1,2,3,4}; // valid  // 16 bytes 
   int d[5]={11,22,33,44,55}; //valid // 20 bytes 
   int e[4]; //valid  // 16bytes 
   e[0]=1; //valid 
   e[1]=4; //valid
   e[2]=5; //valid
   e[3]=7; //valid 

    int f[6]={1,2,3};//valid // 24bytes 


    return 0;
}
*/