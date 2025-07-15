#include<stdio.h>
int main()
{
    int rem,num,rev=0;
    printf("enter num for rev:");
    scanf("%d",&num);
    while( num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    printf("reverse:%d",rev);
}
