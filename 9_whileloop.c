#include<stdio.h>
int main ()
{
    int rem,num,digit_count=0,s;
    printf("enter a num:");
    scanf("%d",&num);
    printf("enter a search num:");
    scanf("%d",&s);
    while(num>0)
    {
        rem=num%10;
        if(rem==s)
       { digit_count=1;}
    num=num/10;
    }
    if(digit_count==1)
    {
        printf("number found");

    }
    else{
        printf("num not found");
    }
}