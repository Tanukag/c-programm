//how to print matrix
#include <stdio.h>
int main()
{
    int mat[3][3] = {{1, 3, 6}, {4, 5, 6}, {1, 2, 1}};
    int i, j;
    printf("matrix elements : \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}