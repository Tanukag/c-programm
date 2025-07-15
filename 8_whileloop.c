//count of digit
#include<stdio.h>
int main()
{
    int num,c=0;
    printf("enter num:");
    scanf("%d",&num);
    while(num>0)
    {
        c++;
        num=num/10;
    }
    printf("count of digit : %d\n",c);
}