#include<stdio.h> 
void printArray(int arr[][3], int r , int c); 
void readArray(int arr[][3], int r , int c);
int main()
{
    int arr[3][3];  
    int r,c;
    /*
        int mat1[3][3];
        int mat2[3][3]; 
        int res[3][3]; 

        readArray(mat1,3,3); // scan the 1st 2darray
        readArray(mat2,3,3); // scan the 2nd 2darray
        matrix_add( mat1,mat2,res,3,3 ); 
        print_array(res,3,3); 

    */
    printf("Enter the elements of the array \n"); 
    readArray(arr,3,3);

    printf("Enter the elements of the array \n"); 
    printArray(arr,3,3);


}
void printArray(int arr[][3], int r , int c)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",arr[i][j]); 
        }
        printf("\n");
    }
}

void readArray(int arr[][3], int r , int c)
{
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]); 
        }
    }
}