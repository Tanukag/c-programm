#include<stdio.h>
int main()
{
    int i=1,num;
    printf("enter a num:");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("  *  \n");
        printf(" * * \n");
        printf("* * *\n");
        printf(" * * \n");
        printf("  *  \n");
        i++;
    }
}