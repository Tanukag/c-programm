#include<stdio.h>
int main ()
{
    int i , j , r ,c;
    printf("enter matrix colum :");
    scanf("%d",&c);
    printf("enter matrix row:");
    scanf("%d",&r);
    int mat[r][c];
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("enter matrix elemnt : ");
                scanf("%d",&mat[i][j]);
            }
        }
    }
    if(r==c)
    {  
      printf("-------------------------\n"); 
      printf("left daigonal of matrix \n");
      printf("________________________\n"); 
     for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {    if(i==j)
                {printf("%d ",mat[i][j]);}
                else{printf("0 ");}
            }
            printf("\n");
        }
    }
    else
    {
        printf("cant find the daigonal please enter square matrix");
    }    
}