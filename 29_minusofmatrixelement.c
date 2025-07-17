#include<stdio.h>
int main ()
{
    int i , j , r ,c;
    printf("enter matrix colum :");
    scanf("%d",&c);
    printf("enter matrix row:");
    scanf("%d",&r);
    int mat1[r][c];
    int mat2[r][c] ,mat3[r][c];
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("enter matrix 1 elemnt : ");
                scanf("%d",&mat1[i][j]);
            }
        }
    }
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("enter matrix 2 elemnt : ");
                scanf("%d",&mat2[i][j]);
            }
        }
    }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               mat3[i][j]=mat1[i][j]-mat2[i][j];
            }
        }
    
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",mat3[i][j]);
            }
            printf("\n");
        }
}