#include<stdio.h>
//void ReadMatrix(int m[3][3], int row, int col);
void ReadMatrix(int m[][3], int row, int col);
void PrintMatrix(int m[][3], int row, int col);
int main()
{
    int mat1[3][3], r,c;
    printf("\n Enter elements of matrix :: \n");
    ReadMatrix(mat1, 3,3);
    printf("\n Elements of matrix :: \n");
    PrintMatrix(mat1, 3,3);
    return 0;
}
void ReadMatrix(int m[][3], int row, int col)
{
    int r,c;
    for(r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            printf("m[%d][%d]::", r,c);
            //scanf("%d", &m[r][c]);
            scanf("%d", (*(m+r)+c));
        }
    }
    return;
}
void PrintMatrix(int m[][3], int row, int col)
{
    int r,c;
    for(r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            //printf("%5d [%u]", m[r][c],&m[r][c]);
            printf("%5d [%u]", *(*(m+r)+c),(*(m+r)+c));
        }
        printf("\n");
    }   
    return ;
}
