#include<stdio.h>
int main()
{
    int num,i =0,j;
    printf("enter a num:");
    scanf("%d",&num);
    while(i<=num)
    {
        for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
        i++;
}
}