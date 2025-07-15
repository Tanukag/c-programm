//sum of digits of that num
#include<stdio.h>
int main()
{
    int rem,sum=0,num;
    printf("enter a num: ");
    scanf("%d",&num);
    while(num>0)
    {
       rem=num%10;
       sum=sum+rem;
       num=num/10;

    }
    printf("sum of digits of that num :%d\n",sum);
}