#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you can vote\n");
    }
    else{
        printf("you can not vote\n");
    }
}