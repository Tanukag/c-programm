//sum of matrix 
#include <stdio.h>
void display_mat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void input_mat(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter element mat[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void summat(int r, int c, int mat1[r][c], int mat2[r][c], int mat3[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
int main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r); 
    printf("enter column for matrix : ");
    scanf("%d", &c); 
    int mat1[r][c], mat2[r][c], mat3[r][c];
    int i, j;
    printf("enter matrix1 elements : \n");
    input_mat(r, c, mat1);
    printf("enter matrix2 elements : \n");
    input_mat(r, c, mat2);
    printf("matrix1 element are : \n");
    display_mat(r, c, mat1);
    printf("matrix2 element are : \n");
    display_mat(r, c, mat2);
    summat(r, c, mat1, mat2, mat3);
    printf("matrix3 element are : \n");
    display_mat(r, c, mat3);
}