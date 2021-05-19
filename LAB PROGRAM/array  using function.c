#include<stdio.h>
int main(void)
{
    int arr[ 7]={10,20}, index;
    //int arr[]= {10,20,30,40,50},index;     // 5 *4 =20
    // int arr[]; //error

    printf("\n Enter elements of array ::  ");
    for(index=0; index<7; index++)
    {
        //printf("arr[%d]", index); // array notatio
        //scanf("%d", &index[arr]);
        //scanf("%d", &arr[index]);
        printf("*(arr+%d)", index); // array notatio
        scanf("%d", (arr+index));
        //scanf("%d", (index+arr));
        //
    }
    printf("\n elements of array :: \n");
    for(index=0; index<7; index++)
    {
        // array notatiom
        //printf("arr[%d]  %8d [%u] \n",index, arr[index],&arr[index] );
        //printf("arr[%d]  %8d [%u] \n",index, index[arr],&index[arr] );
        // pointer notation
       // printf("*(arr+%d)  %8d [%u] \n",index, *(arr+index),(arr+index) );
            printf("*(arr+%d)  %8d [%u] \n",index, *(index+arr),(index+arr) );

    }
    printf("no of elements in arr=%d", index);
    printf("\n size of array in bytes=%d", sizeof(arr));

    //arr++; //lvalue req error
    //++arr;
    //--arr;
    //arr--;
   // ++10; // lvalue req
    printf("\narr=%u &arr[0]=%u &arr=%u\n", arr, &arr[0], &arr);
    printf("arr+1=%u &arr[0]+1=%u &arr+1=%u\n", arr+1, &arr[0]+1, &arr+1);
    printf(" *arr=%u", *arr); // vakue at base address
    return 0;

}