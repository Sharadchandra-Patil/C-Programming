#include<stdio.h>

//void accept_arr(int a[2][2]);
void accept_arr(int (*a)[2]);

/*int main(void)
{
    int arr1[2][2];
    int arr2[2][2];
    accept_arr(arr1);
    accept_arr(arr2);
    return 0;
}

void accept_arr(int (*a)[2])  // (int (*a)[2])
{
    int i,j;
    printf("\n Enter array elements :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("\n Array elements are :\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d at %u",a[i][j],&a[i][j]);
            
        }
        printf("\n");
    }
}

*/
/*
int main(void)
{
    int a[2][2];
    int i,j;
    printf("Enter array elements :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }


    printf("\n Array elements are :\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d at %u",a[i][j],&a[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}


*/




int main(void)
{
    int a[4][2]={10,20,30,40,50,60,70,80};
    int *p[4]={*a,*(a+1),*(a+2),*(a+3)};
    // p is an array of pointers

    //p[0] = a
    //p[1] = a+1
    //p[2] = a+2
    //p[3] = a+3
    printf("\n Size : %d",sizeof(a));
    printf("\n a[0][0] = %d **p = %d",a[0][0],**p);
    printf("\n *(*p+1) : %d",*(*p+2));
    return 0;
}
