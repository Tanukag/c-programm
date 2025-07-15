//oddnumber
#include<stdio.h>
int main()
{
    int i=1,num;
    printf("enter a num:");
    scanf("%d",&num);
    while(i<=num)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
        i++;
    }
}