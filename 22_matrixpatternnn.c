#include<stdio.h>
int main()
{
    int i , j , r,c;
    printf("enter number of rows in matrix :");
    scanf("%d",&r);
    printf("enter number of colum in matrix :");
    scanf("%d",&c);
     int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter matrix[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
            
        }
        printf("\n");
    }
}