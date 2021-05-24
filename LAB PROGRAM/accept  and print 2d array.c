#include<stdio.h>
int main()
{
    //int mat1[][]; // error
    int mat[][2]={1,2,3,4};  // allow
    //int mat2[2][]={1,2,3,4};  //error
    
    int mat1[3][3], r,c;
    printf("\n Enter elements of matrix :: \n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("mat1[%d][%d]::", r,c);
            //scanf("%d", &mat1[r][c]);
            scanf("%d", (*(mat1+r)+c));
        }
    }

    printf("\n Elements of matrix :: \n");
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            //printf("%5d [%u]", mat1[r][c],&mat1[r][c]);
            printf("%5d [%u]", *(*(mat1+r)+c),(*(mat1+r)+c));
        }
        printf("\n");
    }
    return 0;
}
// a[index]      ==  *(a+index);
// mat1[r][c]    ==  *(*(mat1+r)+c)
// mat1[i][j][k] ==  *(*(*(mat1+i)+j)+k)